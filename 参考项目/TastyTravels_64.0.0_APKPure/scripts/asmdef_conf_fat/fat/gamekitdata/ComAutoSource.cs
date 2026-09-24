using Google.Protobuf;

namespace fat.gamekitdata
{
	public sealed class ComAutoSource : ProtoBaseProxy<ComAutoSource>
	{
		public static readonly string FullName;

		public int OutputCounter;

		public long Start;

		public int ItemCount;

		public int TotalOutput;

		public int RandomSeed;

		public int RandomNextIdx;

		public ComAutoSource()
		{
		}

		public ComAutoSource(ComAutoSource other)
		{
		}

		public override ComAutoSource Clone()
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
