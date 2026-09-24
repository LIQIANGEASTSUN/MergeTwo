using Google.Protobuf;
using Google.Protobuf.Collections;

namespace fat.gamekitdata
{
	public sealed class MergeGlobal : ProtoBaseProxy<MergeGlobal>
	{
		public static readonly string FullName;

		public int FreeSpeedUpUsed;

		public int FreeRechargeUsed;

		public static readonly MapField<int, int>.Codec _map_fixedOutputId_codec;

		public readonly MapField<int, int> FixedOutputId;

		public static readonly MapField<int, int>.Codec _map_categoryShowCount_codec;

		public readonly MapField<int, int> CategoryShowCount;

		public static readonly MapField<int, int>.Codec _map_bubbleSpawnMergeCount_codec;

		public readonly MapField<int, int> BubbleSpawnMergeCount;

		public static readonly MapField<int, int>.Codec _map_fixedEatId_codec;

		public readonly MapField<int, int> FixedEatId;

		public static readonly MapField<int, int>.Codec _map_fixedOutputByItemId_codec;

		public readonly MapField<int, int> FixedOutputByItemId;

		public int FreeBubbleUsed;

		public MergeGlobal()
		{
		}

		public MergeGlobal(MergeGlobal other)
		{
		}

		public override MergeGlobal Clone()
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
