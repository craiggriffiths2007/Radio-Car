Texture2D shaderTexture : register(t0);
SamplerState SampleType : register(s0);


struct PixelShaderInput
{
	float4 position : SV_POSITION;

	float2 tex : TEXCOORD0;
};


float4 main(PixelShaderInput input) : SV_TARGET
{
	float4 textureColor;


// Sample the pixel color from the texture using the sampler at this texture coordinate location.
textureColor = shaderTexture.Sample(SampleType, input.tex);

return textureColor;
}


