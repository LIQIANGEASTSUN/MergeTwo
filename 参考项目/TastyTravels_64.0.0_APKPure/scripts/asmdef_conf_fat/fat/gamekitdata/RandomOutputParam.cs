using Google.Protobuf;

namespace fat.gamekitdata
{
	public sealed class RandomOutputParam : ProtoBaseProxy<RandomOutputParam>
	{
		public static readonly string FullName;

		public int RandomSeed;

		public int RandomNextIdx;

		public RandomOutputParam()
		{
		}

		public RandomOutputParam(RandomOutputParam other)
		{
		}

		public override RandomOutputParam Clone()
		{
			return null;
		}

		public override void InternalWriteTo(ref WriteContext output)
		{
		}

		public override int ProxyCalculateSize()
		{
			return 0;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
