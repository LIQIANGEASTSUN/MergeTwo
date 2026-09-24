using Google.Protobuf;

namespace fat.gamekitdata
{
	public sealed class JumpCD : ProtoBaseProxy<JumpCD>
	{
		public static readonly string FullName;

		public int JumpCDItemId;

		public int LifeCounter;

		public JumpCD()
		{
		}

		public JumpCD(JumpCD other)
		{
		}

		public override JumpCD Clone()
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
