using Google.Protobuf;

namespace fat.gamekitdata
{
	public sealed class Order : ProtoBaseProxy<Order>
	{
		public static readonly string FullName;

		public int Npc;

		public int Pos;

		public Order()
		{
		}

		public Order(Order other)
		{
		}

		public override Order Clone()
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
