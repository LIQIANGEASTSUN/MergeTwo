
/* WARNING: Removing unreachable block (ram,0x02cf4c1c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Recovered_BaseItem_OnTapped_0x02BF4AC0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lStack_40;
  char acStack_34 [4];
  
  if ((bRam0000000006812b17 & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063fc690);
    func_0x02ad6de0(PTR_DAT_063fc698);
    bRam0000000006812b17 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  acStack_34[0] = '\0';
  lStack_40 = 0;
  func_0x0527a678(uVar2,acStack_34,0);
  if (*(long *)(param_1 + 0xb8) == 0) {
    iVar5 = 3;
  }
  else {
    lVar3 = func_0x03c2aa08(*(long *)(param_1 + 0xb8),*(undefined8 *)PTR_DAT_063fc690);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      NullReferenceThrowHelper();
    }
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      lVar6 = 0;
      do {
        if (uVar1 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
          BoundsThrowHelper();
        }
        plVar4 = *(long **)(lVar3 + 0x20 + lVar6 * 8);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          NullReferenceThrowHelper();
        }
        (**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
        uVar1 = *(uint *)(lVar3 + 0x18);
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uVar1);
    }
    iVar5 = 6;
  }
  if (acStack_34[0] != '\0') {
    func_0x0527a70c(uVar2,0);
  }
  if ((iVar5 == 6) || (iVar5 == 0)) {
    lVar3 = *(long *)(param_1 + 0x38);
    lStack_40 = param_1;
    func_0x02ad6d8c(&lStack_40,param_1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      NullReferenceThrowHelper();
    }
    func_0x03723728(lVar3,lStack_40,*(undefined8 *)PTR_DAT_063fc698);
  }
  return;
}

