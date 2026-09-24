using Google.Protobuf;

namespace fat.gamekitdata
{
	public sealed class OrderBox : ProtoBaseProxy<OrderBox>
	{
		public static readonly string FullName;

		public int OrderBoxItemTid;

		public int LifeCounter;

		public OrderBox()
		{
		}

		public OrderBox(OrderBox other)
		{
		}

		public override OrderBox Clone()
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
