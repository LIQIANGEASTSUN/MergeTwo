using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ComMergeDying : ProtoBaseProxy<ComMergeDying>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public bool AutoDie;

		public static readonly FieldCodec<int> _repeated_createItem_codec;

		public readonly RepeatedField<int> CreateItem;

		public int DeadItem;

		public static readonly MapField<int, int>.Codec _map_deadItems_codec;

		public readonly MapField<int, int> DeadItems;

		public int DieTime;

		public bool IsFix;

		public int SpeedCost;

		public int XXX_RowIdentifier { get; set; }

		public ComMergeDying()
		{
		}

		public ComMergeDying(ComMergeDying other)
		{
		}

		public override ComMergeDying Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
