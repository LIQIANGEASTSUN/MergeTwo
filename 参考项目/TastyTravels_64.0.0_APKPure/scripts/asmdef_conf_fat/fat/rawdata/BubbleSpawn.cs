using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class BubbleSpawn : ProtoBaseProxy<BubbleSpawn>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_orderRange_codec;

		public readonly RepeatedField<int> OrderRange;

		public static readonly FieldCodec<int> _repeated_spawnCount_codec;

		public readonly RepeatedField<int> SpawnCount;

		public int XXX_RowIdentifier { get; set; }

		public BubbleSpawn()
		{
		}

		public BubbleSpawn(BubbleSpawn other)
		{
		}

		public override BubbleSpawn Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
