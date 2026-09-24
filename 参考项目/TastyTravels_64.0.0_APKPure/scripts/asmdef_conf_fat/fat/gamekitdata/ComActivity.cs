using Google.Protobuf;

namespace fat.gamekitdata
{
	public sealed class ComActivity : ProtoBaseProxy<ComActivity>
	{
		public static readonly string FullName;

		public int ActivityId;

		public int ActivityEnergy;

		public ComActivity()
		{
		}

		public ComActivity(ComActivity other)
		{
		}

		public override ComActivity Clone()
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
