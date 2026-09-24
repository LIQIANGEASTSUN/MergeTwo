using Google.Protobuf;
using Google.Protobuf.Collections;

namespace fat.gamekitdata
{
	public sealed class ComActivityToken : ProtoBaseProxy<ComActivityToken>
	{
		public static readonly string FullName;

		public static readonly FieldCodec<AnyState> _repeated_paramList_codec;

		public readonly RepeatedField<AnyState> ParamList;

		public ComActivityToken()
		{
		}

		public ComActivityToken(ComActivityToken other)
		{
		}

		public override ComActivityToken Clone()
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
