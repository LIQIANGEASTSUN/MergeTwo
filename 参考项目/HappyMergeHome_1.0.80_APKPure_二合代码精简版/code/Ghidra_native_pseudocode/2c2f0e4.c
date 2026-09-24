
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c3f0e4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02c3f300 + 0x2c3f100);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3f304 + 0x2c3f114));
    func_0x01438628(*(undefined4 *)(_UNK_02c3f308 + 0x2c3f120));
    func_0x01438628(*(undefined4 *)(_UNK_02c3f30c + 0x2c3f12c));
    func_0x01438628(*(undefined4 *)(_UNK_02c3f310 + 0x2c3f138));
    func_0x01438628(*(undefined4 *)(_UNK_02c3f314 + 0x2c3f144));
    *pcVar5 = '\x01';
  }
  iVar7 = 0;
  iVar1 = func_0x02953fd4(0xe93,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      iVar2 = *(int *)(param_2 + 0x38);
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0xc);
      }
      if (iVar2 != 0 && iVar1 != 0) {
        iVar7 = func_0x014388d4(**(undefined4 **)(_UNK_02c3f318 + 0x2c3f1d0));
        func_0x024f0510(iVar7,**(undefined4 **)(_UNK_02c3f31c + 0x2c3f1e4));
        uVar6 = 0;
        puVar9 = *(undefined4 **)(_UNK_02c3f320 + 0x2c3f1fc);
        while( true ) {
          iVar1 = *(int *)(param_2 + 0x38);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar1 + 0xc) <= (int)uVar6) break;
          iVar1 = *(int *)(param_2 + 0x38);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar6) {
            func_0x014388e8();
          }
          uVar8 = *(undefined4 *)(iVar1 + uVar6 * 4 + 0x10);
          if (*(int *)(**(int **)(_UNK_02c3f324 + 0x2c3f244) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(*puVar9);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x029a6fa8(iVar1,uVar8,0);
          if (iVar1 != 0) {
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar7 + 8);
            uVar10 = *(uint *)(iVar7 + 0xc);
            piVar3 = *(int **)(_UNK_02c3f328 + 0x2c3f2b4);
            *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
            iVar2 = *piVar3;
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            if (uVar10 < *(uint *)(iVar1 + 0xc)) {
              *(uint *)(iVar7 + 0xc) = uVar10 + 1;
              *(undefined4 *)(iVar1 + uVar10 * 4 + 0x10) = uVar8;
            }
            else {
              func_0x024f0520(iVar7,uVar8,
                              *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
            }
          }
          uVar6 = uVar6 + 1;
        }
      }
    }
    return iVar7;
  }
  iVar1 = func_0x029540a4(0xe93,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar5 = (char *)(_UNK_028955b0 + 0x28954bc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_028955b4 + 0x28954d0),param_1,param_2,0);
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&uStack_50,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a6c(&uStack_38,param_2,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  func_0x024f56d0(iVar7,uVar8,&uStack_38,uVar4,0,0);
  iVar1 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_028955b8 + 0x28955a0));
  return iVar1;
}

