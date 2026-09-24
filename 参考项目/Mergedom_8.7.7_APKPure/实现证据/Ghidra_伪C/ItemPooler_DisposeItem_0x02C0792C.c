
void Recovered_ItemPooler_DisposeItem_0x02C0792C(long param_1,long *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000006812bba & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063fcf48);
    func_0x02ad6de0(PTR_DAT_063f9ee8);
    bRam0000000006812bba = 1;
  }
  if ((param_2 != (long *)0x0) && (lVar2 = func_0x05c3fa2c(param_2,0), lVar2 != 0)) {
    func_0x05c44378(lVar2,0,0);
    (**(code **)(*param_2 + 0x1a8))(param_2,param_3 & 1,*(undefined8 *)(*param_2 + 0x1b0));
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar2 = func_0x04a4b22c(*(long *)(param_1 + 0x40),param_2[10],
                                *(undefined8 *)PTR_DAT_063fcf48), lVar2 != 0)) {
      lVar4 = *(long *)(lVar2 + 0x10);
      lVar5 = *(long *)PTR_DAT_063f9ee8;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(lVar2 + 0x18) = uVar1 + 1;
          plVar3 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
          *plVar3 = (long)param_2;
          func_0x02ad6d8c(plVar3,param_2);
          return;
        }
        func_0x03c28e30(lVar2,param_2,
                        *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

