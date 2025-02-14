#pragma once
#include <vector>
#include "WorldObject.h"

//#include "GameHelpers.h"
//#include "Constants.h"

#include "ModelLoader.h"

#include "../DirectXTK/Inc/DDSTextureLoader.h"

#include "Physics.h"

#include "Camera.h"

#include "Level.h"

#include "Player.h"




typedef struct
{
	int bActive;
	float x, y, z;
	float life;
	float v1, v2; // texture offsey

} point_t;



namespace Simple3DGame
{

	class Points
	{
	public:
		Points(Microsoft::WRL::ComPtr<ID3D11Device1> pm_d3dDevice, Level* pp_Level, Player* pp_Player, Camera^ pp_Camera);
		~Points(void);

		int m_maxParticles;

		part_index* p_index;

		point_t* points;

		int total_pills;
		int total_collected;

		bool bUpdate;

		int current_index;

		Camera^ p_Camera;

		Player* p_Player;

		int current_point;

		Level* p_Level;

		MVPConstantBuffer m_constantBufferB;

		int current_particle_que;

		void Initialize();

		float angle;
		float m_particleSize;

		void ActivateParticles(float posx, float posy, float posz);

		bool LoadLocations();


		void Render(Microsoft::WRL::ComPtr<ID3D11DeviceContext1> deviceContext, Microsoft::WRL::ComPtr<ID3D11Buffer> constantBuffer, ModelViewProjectionConstantBuffer* constantBufferData);
		//void RenderRotating(ComPtr<ID3D11DeviceContext1> deviceContext, ComPtr<ID3D11Buffer> constantBuffer);
		void UpdateProjectionMatrix(DirectX::XMMATRIX *projectionMatrix);

		void Update(float timeTotal, float timeDelta);

		bool InitializeBuffers();

		void CreateOne(float x, float y, float z, int num);

		Microsoft::WRL::ComPtr<ID3D11Device1> m_d3dDevice;

		Microsoft::WRL::ComPtr<ID3D11VertexShader> m_point_vertexShader;
		Microsoft::WRL::ComPtr<ID3D11PixelShader> m_point_pixelShader;
		Microsoft::WRL::ComPtr<ID3D11InputLayout> m_point_inputLayout;

		ID3D11ShaderResourceView* m_Texture;

		ParticleVertexType* m_vertices;


		int m_vertexCount, m_indexCount;

		ID3D11Buffer *m_vertexBuffer, *m_indexBuffer;


		bool UpdateVertecies(ID3D11DeviceContext* deviceContext);

	};

}