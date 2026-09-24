
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bfcc54(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
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
  
  pcVar8 = (char *)(_UNK_02bfcdec + 0x2bfcc6c);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bfcdf0 + 0x2bfcc80));
    func_0x01438628(*(undefined4 *)(_UNK_02bfcdf4 + 0x2bfcc8c));
    func_0x01438628(*(undefined4 *)(_UNK_02bfcdf8 + 0x2bfcc98));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x21aa,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x21aa,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar3 + 8);
    uVar7 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  piVar9 = *(int **)(_UNK_02bfcdfc + 0x2bfccf4);
  uVar7 = *(undefined4 *)(param_1 + 0xbc);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x024ef144(uVar7,0,0);
  if (iVar3 == 0) {
    puVar5 = (undefined4 *)(param_1 + 0xc0);
    uVar7 = *puVar5;
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x024eec50(uVar7,0,0);
    if (iVar3 == 0) {
      piVar9 = *(int **)(_UNK_02bfce00 + 0x2bfcd60);
      uVar7 = *puVar5;
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      pcVar8 = (char *)(_UNK_02bfce04 + 0x2bfcd80);
      if (*pcVar8 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02bfce08 + 0x2bfcd94));
        *pcVar8 = '\x01';
      }
      iVar3 = *piVar9;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x014387a4();
        iVar3 = *piVar9;
      }
      func_0x0362c5e8(uVar7,param_2,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x24),
                      **(undefined4 **)(_UNK_02bfce0c + 0x2bfcdc4));
      *puVar5 = 0;
      if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
        puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)puVar5 >> 0x11) * 4);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
        return;
      }
      return;
    }
  }
  return;
}

