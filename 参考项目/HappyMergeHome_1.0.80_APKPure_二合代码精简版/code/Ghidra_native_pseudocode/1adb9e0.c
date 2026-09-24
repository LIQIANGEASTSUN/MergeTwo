
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aeb9e0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar5 = func_0x02953fd4(0xd2f,0);
  if (iVar5 == 0) {
    iVar5 = FUN_01ae9944(param_1);
    if ((iVar5 != 0) && (iVar5 = FUN_01ae5790(param_1), iVar5 != 0)) {
      iVar5 = FUN_01ae9944(param_1);
      iVar8 = FUN_01ae5790(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar8 + 0x24);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x026ec598(iVar5,iVar8 == 1,0);
    }
    pcVar7 = (char *)(_UNK_01aea57c + 0x1aea330);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01aea580 + 0x1aea344));
      func_0x01438628(*(undefined4 *)(_UNK_01aea584 + 0x1aea350));
      func_0x01438628(*(undefined4 *)(_UNK_01aea588 + 0x1aea35c));
      *pcVar7 = '\x01';
    }
    iVar5 = func_0x02953fd4(0xd2d,0);
    if (iVar5 == 0) {
      iVar5 = FUN_01ae9944(param_1);
      if (iVar5 != 0) {
        iVar5 = FUN_01ae9944(param_1);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar5 + 0x14) == '\0') {
          bVar10 = true;
          iVar5 = 0;
          iVar8 = 0;
          puVar11 = *(undefined4 **)(_UNK_01aea58c + 0x1aea404);
          while( true ) {
            iVar2 = FUN_01ae9944(param_1);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar2 + 0xc) <= iVar5) break;
            iVar2 = FUN_01ae9944(param_1);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x014e9698(iVar2,iVar5,**(undefined4 **)(_UNK_01aea590 + 0x1aea46c));
            iVar3 = FUN_01ae9944(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar9 = *(undefined4 *)(iVar2 + 0x24);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x024f0f34(iVar3,uVar9,*puVar11);
            if (iVar3 == 0) {
              uVar4 = (uint)*(byte *)(iVar2 + 0xc);
            }
            else {
              iVar3 = FUN_01ae9944(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              bVar12 = *(char *)(iVar3 + 9) != '\0';
              uVar4 = 0;
              if (bVar12) {
                uVar4 = (uint)*(byte *)(iVar2 + 0xd);
              }
              if (bVar12) {
                iVar8 = iVar8 + (uVar4 ^ 1);
              }
              uVar4 = (uint)*(byte *)(iVar2 + 0xc);
              iVar8 = iVar8 + (uVar4 ^ 1) + (*(byte *)(iVar2 + 0x28) ^ 1);
            }
            cVar1 = '\0';
            if (uVar4 != 0) {
              cVar1 = *(char *)(iVar2 + 0xd);
            }
            if (uVar4 != 0 && cVar1 != '\0') {
              if (*(char *)(iVar2 + 0x28) == '\0') {
                bVar10 = false;
              }
            }
            else {
              bVar10 = false;
            }
            iVar5 = iVar5 + 1;
          }
          if (bVar10) {
            iVar5 = FUN_01ae9944(param_1);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x026ec720(iVar5,1,0);
          }
          *(int *)(param_1 + 0x40) = iVar8;
          return;
        }
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
      return;
    }
    iVar5 = func_0x029540a4(0xd2d,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar5 = func_0x029540a4(0xd2f,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar5 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar5 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar8 = *(int *)(iVar5 + 8);
  uVar9 = *(undefined4 *)(iVar5 + 0xc);
  iVar5 = *(int *)(iVar5 + 0x10);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  uVar6 = 2;
  if (iVar5 == 0) {
    uVar6 = 1;
  }
  func_0x024f56d0(iVar8,uVar9,&uStack_30,uVar6,0,0);
  return;
}

