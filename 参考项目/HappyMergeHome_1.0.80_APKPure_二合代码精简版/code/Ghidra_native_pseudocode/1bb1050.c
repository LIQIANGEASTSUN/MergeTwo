
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01bc1050(int *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_48 [24];
  
  pcVar7 = (char *)(_UNK_01bc1290 + 0x1bc106c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01bc1294 + 0x1bc1080));
    func_0x01438628(*(undefined4 *)(_UNK_01bc1298 + 0x1bc108c));
    func_0x01438628(*(undefined4 *)(_UNK_01bc129c + 0x1bc1098));
    func_0x01438628(*(undefined4 *)(_UNK_01bc12a0 + 0x1bc10a4));
    func_0x01438628(*(undefined4 *)(_UNK_01bc12a4 + 0x1bc10b0));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1b0e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1b0e,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x024f56c0(auStack_48,0,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&stack0xffffffd0,param_1,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar11 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar6 = 2;
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    func_0x024f56d0(iVar9,uVar11,&stack0xffffffd0,uVar6,0,0);
    uVar3 = func_0x024f56e0(&stack0xffffffd0,0,0);
    return uVar3;
  }
  if (*(int *)(**(int **)(_UNK_01bc12a8 + 0x1bc1110) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01bc12ac + 0x1bc112c));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar13 = func_0x026ffbe0(iVar2,0);
  iVar2 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
  if (iVar2 == 0) {
    piVar8 = *(int **)(_UNK_01bc12b0 + 0x1bc117c);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar10 = *(undefined4 **)(_UNK_01bc12b4 + 0x1bc1198);
    iVar2 = func_0x014e9518(*puVar10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar2 + 0x14) != 0) {
      uVar3 = param_1[6];
      iVar2 = param_1[7];
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar9 = func_0x014e9518(*puVar10);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = *(int *)(iVar9 + 0x14);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = func_0x0152983c(iVar9,0,**(undefined4 **)(_UNK_01bc12b8 + 0x1bc120c));
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      fVar12 = *(float *)(iVar9 + 0xc);
      uVar14 = func_0x014e61a4(fVar12);
      uVar15 = func_0x014e6220(fVar12);
      if (fVar12 < 0.0) {
        uVar15 = uVar14;
      }
      lVar1 = (uVar15 & 0xffffffff) * 3600000;
      uVar4 = (int)(uVar15 >> 0x20) * 3600000 + (int)((ulonglong)lVar1 >> 0x20);
      uVar5 = (int)((ulonglong)uVar13 >> 0x20) - (iVar2 + (uint)((uint)uVar13 < uVar3));
      return (uint)(uVar5 < uVar4 || uVar4 - uVar5 < (uint)((uint)uVar13 - uVar3 <= (uint)lVar1));
    }
  }
  return 0;
}

