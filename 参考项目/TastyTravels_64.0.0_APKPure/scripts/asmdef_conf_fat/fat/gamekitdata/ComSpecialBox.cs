using Google.Protobuf;

namespace fat.gamekitdata
{
	public sealed class ComSpecialBox : ProtoBaseProxy<ComSpecialBox>
	{
		public static readonly string FullName;

		public int ItemCount;

		public ComSpecialBox()
		{
		}

		public ComSpecialBox(ComSpecialBox other)
		{
		}

		public override ComSpecialBox Clone()
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
