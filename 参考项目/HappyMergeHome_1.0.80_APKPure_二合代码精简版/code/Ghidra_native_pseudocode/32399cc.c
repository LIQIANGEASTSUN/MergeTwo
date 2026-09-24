
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032499cc(undefined4 param_1)

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
  
  pcVar7 = (char *)(_UNK_03249c48 + 0x32499e8);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03249c4c + 0x32499fc));
    func_0x01438628(*(undefined4 *)(_UNK_03249c50 + 0x3249a08));
    func_0x01438628(*(undefined4 *)(_UNK_03249c54 + 0x3249a14));
    func_0x01438628(*(undefined4 *)(_UNK_03249c58 + 0x3249a20));
    func_0x01438628(*(undefined4 *)(_UNK_03249c5c + 0x3249a2c));
    *pcVar7 = '\x01';
  }
  iVar9 = 0;
  iVar2 = func_0x02953fd4(0x16fb,0);
  if (iVar2 == 0) {
    iVar2 = FUN_03235a08(param_1);
    if (iVar2 != 0) {
      iVar2 = FUN_0323c5d0(param_1,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      lVar1 = *(longlong *)(iVar2 + 0x20);
      if (*(int *)(**(int **)(_UNK_03249c60 + 0x3249abc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_03249c64 + 0x3249adc));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x3c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x04cfd760(iVar2,0,**(undefined4 **)(_UNK_03249c68 + 0x3249b10));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      fVar11 = *(float *)(iVar2 + 0x10) * _UNK_03249c44;
      lVar12 = func_0x014e61a4(fVar11);
      lVar13 = func_0x014e6220(fVar11);
      if (fVar11 < 0.0) {
        lVar13 = lVar12;
      }
      lVar1 = lVar13 + lVar1;
      func_0x03249c74(param_1,(int)((ulonglong)lVar13 >> 0x20),(int)lVar1,
                      (int)((ulonglong)lVar1 >> 0x20));
      if (*(int *)(**(int **)(_UNK_03249c6c + 0x3249b7c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_03249c70 + 0x3249b98));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar14 = func_0x026ffbe0(iVar2,0);
      iVar4 = (int)((ulonglong)uVar14 >> 0x20);
      uVar3 = (uint)uVar14;
      iVar2 = FUN_0323c5d0(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x78);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar2 + 0x24);
      iVar9 = 0;
      bVar10 = *(uint *)(iVar2 + 0x20) < uVar3;
      if ((int)(iVar5 - (iVar4 + (uint)bVar10)) < 0 ==
          (SBORROW4(iVar5,iVar4) != SBORROW4(iVar5 - iVar4,(uint)bVar10))) {
        iVar2 = FUN_0323c5d0(param_1,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x78);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar9 = *(int *)(iVar2 + 0x20) - uVar3;
      }
    }
    return iVar9;
  }
  iVar2 = func_0x029540a4(0x16fb,0);
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

