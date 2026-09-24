
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01810474(undefined4 param_1)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  float fVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined1 auStack_48 [24];
  
  pcVar6 = (char *)(_UNK_0181067c + 0x181048c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01810680 + 0x18104a0));
    func_0x01438628(*(undefined4 *)(_UNK_01810684 + 0x18104ac));
    func_0x01438628(*(undefined4 *)(_UNK_01810688 + 0x18104b8));
    func_0x01438628(*(undefined4 *)(_UNK_0181068c + 0x18104c4));
    func_0x01438628(*(undefined4 *)(_UNK_01810690 + 0x18104d0));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x13cf,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x13cf,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x024f56c0(auStack_48,0,0);
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&stack0xffffffd0,param_1,0);
    iVar8 = *(int *)(iVar3 + 8);
    uVar10 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar3 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar8,uVar10,&stack0xffffffd0,uVar5,0,0);
    iVar3 = func_0x024f5770(&stack0xffffffd0,0,0);
    return iVar3;
  }
  iVar3 = FUN_017fb348(param_1);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_018013d8(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    lVar1 = *(longlong *)(iVar3 + 0x20);
    if (*(int *)(**(int **)(_UNK_01810694 + 0x1810554) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01810698 + 0x1810574));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x34);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x0152983c(iVar3,0,**(undefined4 **)(_UNK_0181069c + 0x18105a8));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    fVar2 = _UNK_01810678;
    fVar11 = *(float *)(iVar3 + 0x10);
    if (*(int *)(**(int **)(_UNK_018106a0 + 0x18105d4) + 0x74) == 0) {
      func_0x014387a4();
    }
    fVar11 = fVar11 * fVar2;
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_018106a4 + 0x18105f4));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    lVar12 = func_0x014e61a4(fVar11);
    lVar13 = func_0x014e6220(fVar11);
    if (fVar11 < 0.0) {
      lVar13 = lVar12;
    }
    lVar13 = lVar13 + lVar1;
    uVar7 = (uint)lVar13;
    uVar9 = (uint)((ulonglong)lVar13 >> 0x20);
    uVar14 = func_0x026ffbe0(iVar3,0);
    uVar4 = (uint)((ulonglong)uVar14 >> 0x20);
    iVar3 = uVar7 - (uint)uVar14;
    if (uVar9 <= uVar4 && (uint)((uint)uVar14 <= uVar7) <= uVar9 - uVar4) {
      iVar3 = 0;
    }
  }
  return iVar3;
}

