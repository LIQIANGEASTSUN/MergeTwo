using Google.Protobuf;

namespace fat.gamekitdata
{
	public sealed class ComChest : ProtoBaseProxy<ComChest>
	{
		public static readonly string FullName;

		public bool Opened;

		public int UsedCount;

		public ComChest()
		{
		}

		public ComChest(ComChest other)
		{
		}

		public override ComChest Clone()
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
