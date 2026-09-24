using Google.Protobuf;

namespace fat.gamekitdata
{
	public sealed class ComBubble : ProtoBaseProxy<ComBubble>
	{
		public static readonly string FullName;

		public int Life;

		public long Start;

		public int Type;

		public ComBubble()
		{
		}

		public ComBubble(ComBubble other)
		{
		}

		public override ComBubble Clone()
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
