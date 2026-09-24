using Google.Protobuf;

namespace fat.gamekitdata
{
	public sealed class ComTrigSource : ProtoBaseProxy<ComTrigSource>
	{
		public static readonly string FullName;

		public int TriggerCount;

		public ComTrigSource()
		{
		}

		public ComTrigSource(ComTrigSource other)
		{
		}

		public override ComTrigSource Clone()
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
