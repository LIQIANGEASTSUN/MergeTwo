using Google.Protobuf;

namespace fat.gamekitdata
{
	public sealed class AnyState : ProtoBaseProxy<AnyState>
	{
		public static readonly string FullName;

		public int Id;

		public int Value;

		public AnyState()
		{
		}

		public AnyState(AnyState other)
		{
		}

		public override AnyState Clone()
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
