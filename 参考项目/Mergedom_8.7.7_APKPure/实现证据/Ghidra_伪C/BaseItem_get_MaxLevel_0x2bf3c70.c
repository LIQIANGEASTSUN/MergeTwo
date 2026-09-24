
undefined4 Recovered_BaseItem_get_MaxLevel_0x2bf3c70(long param_1)

{
  long lVar1;
  
  if ((bRam0000000006812b0c & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063fa170);
    bRam0000000006812b0c = 1;
  }
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x50) + 0x58), lVar1 != 0)) {
    return *(undefined4 *)(lVar1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

