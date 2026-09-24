using Google.Protobuf;
using Google.Protobuf.Collections;

namespace fat.gamekitdata
{
	public sealed class ComEatingSource : ProtoBaseProxy<ComEatingSource>
	{
		public static readonly string FullName;

		public int CountLeft;

		public int EatingTimeLeft;

		public static readonly MapField<int, int>.Codec _map_itemsWithin_codec;

		public readonly MapField<int, int> ItemsWithin;

		public int RandomNextIdx;

		public int RandomSeed;

		public int EatGroup;

		public ComEatingSource()
		{
		}

		public ComEatingSource(ComEatingSource other)
		{
		}

		public override ComEatingSource Clone()
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
