
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0187fedc(undefined4 param_1)

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
  
  pcVar6 = (char *)(_UNK_018800e4 + 0x187fef4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018800e8 + 0x187ff08));
    func_0x01438628(*(undefined4 *)(_UNK_018800ec + 0x187ff14));
    func_0x01438628(*(undefined4 *)(_UNK_018800f0 + 0x187ff20));
    func_0x01438628(*(undefined4 *)(_UNK_018800f4 + 0x187ff2c));
    func_0x01438628(*(undefined4 *)(_UNK_018800f8 + 0x187ff38));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x172f,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x172f,0);
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
  iVar3 = FUN_0186d808(param_1);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_01873864(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    lVar1 = *(longlong *)(iVar3 + 0x20);
    if (*(int *)(**(int **)(_UNK_018800fc + 0x187ffbc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01880100 + 0x187ffdc));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x34);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x0152983c(iVar3,0,**(undefined4 **)(_UNK_01880104 + 0x1880010));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    fVar2 = _UNK_018800e0;
    fVar11 = *(float *)(iVar3 + 0x10);
    if (*(int *)(**(int **)(_UNK_01880108 + 0x188003c) + 0x74) == 0) {
      func_0x014387a4();
    }
    fVar11 = fVar11 * fVar2;
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0188010c + 0x188005c));
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

