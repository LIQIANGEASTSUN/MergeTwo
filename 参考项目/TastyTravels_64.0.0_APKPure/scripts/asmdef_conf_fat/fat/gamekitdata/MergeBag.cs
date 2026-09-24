using Google.Protobuf;
using Google.Protobuf.Collections;

namespace fat.gamekitdata
{
	public sealed class MergeBag : ProtoBaseProxy<MergeBag>
	{
		public static readonly string FullName;

		public int Id;

		public int InvCapacity;

		public static readonly FieldCodec<int> _repeated_invItems_codec;

		public readonly RepeatedField<int> InvItems;

		public static readonly FieldCodec<int> _repeated_redPointItems_codec;

		public readonly RepeatedField<int> RedPointItems;

		public MergeBag()
		{
		}

		public MergeBag(MergeBag other)
		{
		}

		public override MergeBag Clone()
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
