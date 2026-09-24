
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aea318(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01aea57c + 0x1aea330);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aea580 + 0x1aea344));
    func_0x01438628(*(undefined4 *)(_UNK_01aea584 + 0x1aea350));
    func_0x01438628(*(undefined4 *)(_UNK_01aea588 + 0x1aea35c));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0xd2d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0xd2d,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar6 = 2;
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    func_0x024f56d0(iVar8,uVar9,&uStack_30,uVar6,0,0);
    return;
  }
  iVar2 = FUN_01ae9944(param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_01ae9944(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(char *)(iVar2 + 0x14) == '\0') {
      bVar10 = true;
      iVar2 = 0;
      iVar8 = 0;
      puVar11 = *(undefined4 **)(_UNK_01aea58c + 0x1aea404);
      while( true ) {
        iVar3 = FUN_01ae9944(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0xc);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar3 + 0xc) <= iVar2) break;
        iVar3 = FUN_01ae9944(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0xc);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x014e9698(iVar3,iVar2,**(undefined4 **)(_UNK_01aea590 + 0x1aea46c));
        iVar4 = FUN_01ae9944(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar9 = *(undefined4 *)(iVar3 + 0x24);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x024f0f34(iVar4,uVar9,*puVar11);
        if (iVar4 == 0) {
          uVar5 = (uint)*(byte *)(iVar3 + 0xc);
        }
        else {
          iVar4 = FUN_01ae9944(param_1);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          bVar12 = *(char *)(iVar4 + 9) != '\0';
          uVar5 = 0;
          if (bVar12) {
            uVar5 = (uint)*(byte *)(iVar3 + 0xd);
          }
          if (bVar12) {
            iVar8 = iVar8 + (uVar5 ^ 1);
          }
          uVar5 = (uint)*(byte *)(iVar3 + 0xc);
          iVar8 = iVar8 + (uVar5 ^ 1) + (*(byte *)(iVar3 + 0x28) ^ 1);
        }
        cVar1 = '\0';
        if (uVar5 != 0) {
          cVar1 = *(char *)(iVar3 + 0xd);
        }
        if (uVar5 != 0 && cVar1 != '\0') {
          if (*(char *)(iVar3 + 0x28) == '\0') {
            bVar10 = false;
          }
        }
        else {
          bVar10 = false;
        }
        iVar2 = iVar2 + 1;
      }
      if (bVar10) {
        iVar2 = FUN_01ae9944(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x026ec720(iVar2,1,0);
      }
      *(int *)(param_1 + 0x40) = iVar8;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}

