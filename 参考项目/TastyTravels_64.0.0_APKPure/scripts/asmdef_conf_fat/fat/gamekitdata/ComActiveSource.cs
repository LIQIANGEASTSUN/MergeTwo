using Google.Protobuf;

namespace fat.gamekitdata
{
	public sealed class ComActiveSource : ProtoBaseProxy<ComActiveSource>
	{
		public static readonly string FullName;

		public int ItemCount;

		public ComActiveSource()
		{
		}

		public ComActiveSource(ComActiveSource other)
		{
		}

		public override ComActiveSource Clone()
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
