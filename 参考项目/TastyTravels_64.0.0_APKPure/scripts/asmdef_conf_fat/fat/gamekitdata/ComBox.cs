using Google.Protobuf;

namespace fat.gamekitdata
{
	public sealed class ComBox : ProtoBaseProxy<ComBox>
	{
		public static readonly string FullName;

		public int UsedCount;

		public ComBox()
		{
		}

		public ComBox(ComBox other)
		{
		}

		public override ComBox Clone()
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
