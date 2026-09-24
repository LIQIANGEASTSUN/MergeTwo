
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01724610(undefined4 param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  float fVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_0172488c + 0x172462c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01724890 + 0x1724640));
    func_0x01438628(*(undefined4 *)(_UNK_01724894 + 0x172464c));
    func_0x01438628(*(undefined4 *)(_UNK_01724898 + 0x1724658));
    func_0x01438628(*(undefined4 *)(_UNK_0172489c + 0x1724664));
    func_0x01438628(*(undefined4 *)(_UNK_017248a0 + 0x1724670));
    *pcVar7 = '\x01';
  }
  iVar9 = 0;
  iVar2 = func_0x02953fd4(0x166a,0);
  if (iVar2 == 0) {
    iVar2 = FUN_0170e9c4(param_1);
    if (iVar2 != 0) {
      iVar2 = FUN_01714754(param_1,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      lVar1 = *(longlong *)(iVar2 + 0x20);
      if (*(int *)(**(int **)(_UNK_017248a4 + 0x1724700) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017248a8 + 0x1724720));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x30);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x0152983c(iVar2,0,**(undefined4 **)(_UNK_017248ac + 0x1724754));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      fVar11 = *(float *)(iVar2 + 0x10) * _UNK_01724888;
      lVar12 = func_0x014e61a4(fVar11);
      lVar13 = func_0x014e6220(fVar11);
      if (fVar11 < 0.0) {
        lVar13 = lVar12;
      }
      lVar1 = lVar13 + lVar1;
      FUN_017218c8(param_1,(int)((ulonglong)lVar13 >> 0x20),(int)lVar1,
                   (int)((ulonglong)lVar1 >> 0x20));
      if (*(int *)(**(int **)(_UNK_017248b0 + 0x17247c0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017248b4 + 0x17247dc));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar14 = func_0x026ffbe0(iVar2,0);
      iVar4 = (int)((ulonglong)uVar14 >> 0x20);
      uVar3 = (uint)uVar14;
      iVar2 = FUN_01714754(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x74);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar2 + 0x24);
      iVar9 = 0;
      bVar10 = *(uint *)(iVar2 + 0x20) < uVar3;
      if ((int)(iVar5 - (iVar4 + (uint)bVar10)) < 0 ==
          (SBORROW4(iVar5,iVar4) != SBORROW4(iVar5 - iVar4,(uint)bVar10))) {
        iVar2 = FUN_01714754(param_1,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x74);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar9 = *(int *)(iVar2 + 0x20) - uVar3;
      }
    }
    return iVar9;
  }
  iVar2 = func_0x029540a4(0x166a,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar9 = *(int *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar6 = 2;
  if (iVar2 == 0) {
    uVar6 = 1;
  }
  func_0x024f56d0(iVar9,uVar8,&uStack_30,uVar6,0,0);
  iVar2 = func_0x024f5770(&uStack_30,0,0);
  return iVar2;
}

