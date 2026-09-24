using Google.Protobuf;
using Google.Protobuf.Collections;

namespace fat.gamekitdata
{
	public sealed class RandomParam : ProtoBaseProxy<RandomParam>
	{
		public static readonly string FullName;

		public int Type;

		public static readonly FieldCodec<int> _repeated_intParam_codec;

		public readonly RepeatedField<int> IntParam;

		public static readonly MapField<int, int>.Codec _map_mapParam1_codec;

		public readonly MapField<int, int> MapParam1;

		public RandomParam()
		{
		}

		public RandomParam(RandomParam other)
		{
		}

		public override RandomParam Clone()
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
