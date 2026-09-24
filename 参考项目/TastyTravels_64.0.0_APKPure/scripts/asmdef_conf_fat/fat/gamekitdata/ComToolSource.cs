using Google.Protobuf;

namespace fat.gamekitdata
{
	public sealed class ComToolSource : ProtoBaseProxy<ComToolSource>
	{
		public static readonly string FullName;

		public int ItemCount;

		public int TotalOutput;

		public ComToolSource()
		{
		}

		public ComToolSource(ComToolSource other)
		{
		}

		public override ComToolSource Clone()
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
