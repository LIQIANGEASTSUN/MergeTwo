
void Recovered_BaseItem_NestedType__OnMerged_d__64_MoveNext_0x02BF5C30(undefined4 *param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  
  if ((bRam0000000006812b2a & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063fc5e0);
    func_0x02ad6de0(PTR_DAT_063f9e90);
    func_0x02ad6de0(PTR_DAT_063fc5a8);
    func_0x02ad6de0(PTR_DAT_063fa4e8);
    func_0x02ad6de0(PTR_DAT_063f0f18);
    bRam0000000006812b2a = 1;
  }
  puVar1 = PTR_DAT_063fa4e8;
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    NullReferenceThrowHelper();
  }
  lVar2 = *(long *)(lVar7 + 0xb8);
  if (lVar2 != 0) {
    iVar8 = 0;
    while (iVar8 < *(int *)(lVar2 + 0x18)) {
      lVar2 = TailTarget_3b28b60(lVar2,iVar8,*(undefined8 *)puVar1);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      func_0x02d0ce54(lVar2,0);
      lVar2 = *(long *)(lVar7 + 0xb8);
      iVar8 = iVar8 + 1;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
    }
  }
  Recovered_BaseItem_LevelUp_0x02BF4094(lVar7);
  if (*(long *)(lVar7 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    NullReferenceThrowHelper();
  }
  func_0x05c44378(*(long *)(lVar7 + 0x68),0,0);
  func_0x02cf45d8(lVar7);
  func_0x02c34314(4,0);
  uVar9 = *(undefined8 *)(lVar7 + 0xa8);
  if (*(int *)(*(long *)PTR_DAT_063f0f18 + 0xe4) == 0) {
    func_0x02ad6f5c();
  }
  uVar3 = func_0x05c4a644(uVar9,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(lVar7 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      NullReferenceThrowHelper();
    }
    func_0x02d09410(0x40000000,*(long *)(lVar7 + 0xa8),0);
  }
  puVar1 = PTR_DAT_063f9e90;
  lVar2 = *(long *)PTR_DAT_063f9e90;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    func_0x02ad6f5c();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    NullReferenceThrowHelper();
  }
  (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),lVar7,0,*(undefined8 *)(lVar2 + 0x28));
  plVar10 = *(long **)(param_1 + 2);
  *param_1 = 0xfffffffe;
  if (plVar10 == (long *)0x0) {
    *(long *)(param_1 + 6) = lVar7;
    func_0x02ad6d8c(param_1 + 6,lVar7);
    return;
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_063fc5e0 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = func_0x02b0e028();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = func_0x02b0e028(lVar2);
  }
  lVar5 = *plVar10;
  uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar3 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar2) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_02cf5e48;
      }
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)func_0x02b0e364(plVar10,lVar2,2);
LAB_02cf5e48:
                    /* WARNING: Could not recover jumptable at 0x02cf5e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar10,lVar7,puVar4[1]);
  return;
}

