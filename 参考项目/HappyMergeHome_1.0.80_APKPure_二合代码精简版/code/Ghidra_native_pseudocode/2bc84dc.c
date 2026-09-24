
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bd84dc(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  uint extraout_r1;
  uint uVar3;
  uint extraout_r1_00;
  uint extraout_r3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined1 uVar9;
  uint in_fpscr;
  float fVar10;
  undefined8 uVar11;
  
  pcVar5 = (char *)(iRam02bd875c + 0x2bd8500);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd8760 + 0x2bd8514));
    func_0x01438628(*(undefined4 *)(_UNK_02bd8764 + 0x2bd8520));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xd6e,0);
  fVar2 = fRam02bd8754;
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xd6e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02892fec(iVar1,param_1,param_2,param_3,0);
    return iVar1;
  }
  pcVar5 = (char *)(_UNK_02bd8768 + 0x2bd8588);
  if (param_2 == 0) {
    fVar2 = (float)func_0x014388e4();
    iVar1 = 0;
  }
  else {
    fVar10 = *(float *)(param_2 + 0x5c);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02bd876c + 0x2bd85a8));
      *pcVar5 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_02bd8770 + 0x2bd85c0) + 0x74) == 0) {
      func_0x014387a4();
    }
    fVar2 = (float)func_0x024f04b4(fVar10 * fVar2);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar2 == fRam02bd8758) << 0x1e;
    iVar1 = (int)fVar2;
    if (SUB41(in_fpscr >> 0x1e,0)) {
      iVar1 = -0x80000000;
    }
  }
  iVar6 = *(int *)(param_2 + 0x10c);
  if (iVar6 != 0) {
    fVar2 = *(float *)(iVar6 + 0xc);
  }
  if (iVar6 == 0 || fVar2 == 0.0) {
    return iVar1;
  }
  if (param_3 == 0) {
    func_0x014388e4();
    uVar4 = uRam00000080;
    iVar6 = *(int *)(param_2 + 0x10c);
    if (iVar6 == 0) {
      func_0x014388e4();
      func_0x014e67d4(uVar4,uRam0000000c);
      iVar6 = *(int *)(param_2 + 0x10c);
      bVar8 = iVar6 < 0;
      uVar9 = iVar6 == 0;
      uVar7 = 0;
      uVar3 = extraout_r1_00;
      if ((bool)uVar9) {
        iVar1 = func_0x014388e4();
        if (bVar8) {
          uVar7 = SBORROW4(0,iVar1);
          uVar9 = iVar1 == 0;
        }
        if (!(bool)uVar7) {
          software_interrupt(0x800000);
        }
                    /* WARNING: Could not recover jumptable at 0x02bd875c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        if (!(bool)uVar9) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar1 = (*(code *)(extraout_r3 & 0xfffffffe | 0x8c0000))();
        return iVar1;
      }
      goto LAB_02bd8654;
    }
  }
  else {
    uVar4 = *(undefined4 *)(param_3 + 0x80);
  }
  func_0x014e67d4(uVar4,*(undefined4 *)(iVar6 + 0xc));
  uVar3 = extraout_r1;
LAB_02bd8654:
  if (*(uint *)(iVar6 + 0xc) <= uVar3) {
    func_0x014388e8();
  }
  iVar1 = *(int *)(iVar6 + uVar3 * 4 + 0x10);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd8774 + 0x2bd8694));
    *pcVar5 = '\x01';
  }
  fVar2 = (float)VectorSignedToFloat(iVar1 * 0x3c,(byte)(in_fpscr >> 0x16) & 3);
  if (*(int *)(**(int **)(_UNK_02bd8778 + 0x2bd86ac) + 0x74) == 0) {
    func_0x014387a4();
  }
  if (*(int *)(param_3 + 0x78) == 0 && *(int *)(param_3 + 0x7c) == 0) {
    if (*(int *)(**(int **)(_UNK_02bd877c + 0x2bd86dc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd8780 + 0x2bd86f8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar11 = func_0x026ffbe0(iVar1,0);
    uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
    FUN_026f79a4(param_3,uVar4,(int)uVar11,uVar4,0);
  }
  return (int)fVar2;
}

