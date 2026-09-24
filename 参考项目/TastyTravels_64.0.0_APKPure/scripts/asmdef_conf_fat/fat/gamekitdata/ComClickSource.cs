using Google.Protobuf;

namespace fat.gamekitdata
{
	public sealed class ComClickSource : ProtoBaseProxy<ComClickSource>
	{
		public static readonly string FullName;

		public int ReviveCounter;

		public long ReviveStart;

		public int OutputCounter;

		public long OutputStart;

		public int ItemInRecharge;

		public int Item;

		public int NoCDCounter;

		public int RandomSeed;

		public int RandomNextIdx;

		public int OutputCount;

		public bool IsFirstRevive;

		public int BoostItemCount;

		public ComClickSource()
		{
		}

		public ComClickSource(ComClickSource other)
		{
		}

		public override ComClickSource Clone()
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
