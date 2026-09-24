using Google.Protobuf;

namespace fat.gamekitdata
{
	public sealed class ComSkill : ProtoBaseProxy<ComSkill>
	{
		public static readonly string FullName;

		public int BuffCounter;

		public int StackCounter;

		public ComSkill()
		{
		}

		public ComSkill(ComSkill other)
		{
		}

		public override ComSkill Clone()
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
