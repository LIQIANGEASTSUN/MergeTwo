
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0175a2cc(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar3 = func_0x02953fd4(0x8d1f,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x8d1f,0);
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
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  iVar3 = FUN_0174e5a0(param_1);
  if (iVar3 != 0) {
    iVar3 = FUN_0175a02c(param_1,param_2);
    if (iVar3 != 0) {
      return;
    }
    iVar3 = FUN_01759e84(param_1,param_2);
    if (iVar3 != 0) {
      func_0x026ecbfc(iVar3,1,0);
      pcVar5 = (char *)(_UNK_01759c5c + 0x17597ac);
      if (*pcVar5 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_01759c60 + 0x17597c0));
        func_0x01438628(*(undefined4 *)(_UNK_01759c64 + 0x17597cc));
        func_0x01438628(*(undefined4 *)(_UNK_01759c68 + 0x17597d8));
        *pcVar5 = '\x01';
      }
      iVar3 = func_0x02953fd4(0x2079,0);
      if (iVar3 != 0) {
        iVar3 = func_0x029540a4(0x2079,0);
        if (iVar3 == 0) {
          func_0x014388e4();
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
        if (*(int *)(iVar3 + 0x10) != 0) {
          func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
        }
        func_0x01523a6c(&uStack_30,param_1,0);
        iVar6 = *(int *)(iVar3 + 8);
        uVar8 = *(undefined4 *)(iVar3 + 0xc);
        iVar3 = *(int *)(iVar3 + 0x10);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar4 = 2;
        if (iVar3 == 0) {
          uVar4 = 1;
        }
        uStack_50 = 0;
        uStack_4c = 0;
        func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar4);
        return;
      }
      iVar3 = FUN_0174e5a0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x6c);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar3 + 0x14) == '\0') {
        bVar9 = true;
        iVar3 = 0;
        iVar6 = 0;
        puVar10 = *(undefined4 **)(_UNK_01759c6c + 0x1759880);
        puVar11 = *(undefined4 **)(_UNK_01759c70 + 0x1759888);
        while( true ) {
          iVar2 = FUN_0174e5a0(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x6c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar2 + 0xc) <= iVar3) break;
          iVar2 = FUN_0174e5a0(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x6c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar2 + 0x10);
          iVar2 = FUN_0174e5a0(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x6c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x014e9698(iVar2,iVar3,*puVar10);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar8 = *(undefined4 *)(iVar2 + 0x24);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x024f0f34(iVar7,uVar8,*puVar11);
          if (iVar2 != 0) {
            iVar2 = FUN_0174e5a0(param_1);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x6c);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (*(char *)(iVar2 + 9) != '\0') {
              iVar2 = FUN_0174e5a0(param_1);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar2 = *(int *)(iVar2 + 0x6c);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar2 = *(int *)(iVar2 + 0xc);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar2 = func_0x014e9698(iVar2,iVar3,*puVar10);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar6 = iVar6 + (*(byte *)(iVar2 + 0xd) ^ 1);
            }
            iVar2 = FUN_0174e5a0(param_1);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x6c);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x014e9698(iVar2,iVar3,*puVar10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            bVar1 = *(byte *)(iVar2 + 0xc);
            iVar2 = FUN_0174e5a0(param_1);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x6c);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x014e9698(iVar2,iVar3,*puVar10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar6 = iVar6 + (bVar1 ^ 1) + (*(byte *)(iVar2 + 0x28) ^ 1);
          }
          iVar2 = FUN_0174e5a0(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x6c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x014e9698(iVar2,iVar3,*puVar10);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (*(char *)(iVar2 + 0xc) == '\0') {
LAB_01759c04:
            bVar9 = false;
          }
          else {
            iVar2 = FUN_0174e5a0(param_1);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x6c);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x014e9698(iVar2,iVar3,*puVar10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (*(char *)(iVar2 + 0xd) == '\0') goto LAB_01759c04;
            iVar2 = FUN_0174e5a0(param_1);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x6c);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x014e9698(iVar2,iVar3,*puVar10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (*(char *)(iVar2 + 0x28) == '\0') {
              bVar9 = false;
            }
          }
          iVar3 = iVar3 + 1;
        }
        if (bVar9) {
          iVar3 = FUN_0174e5a0(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x6c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x026ec720(iVar3,1,0);
        }
        *(int *)(param_1 + 0x54) = iVar6;
      }
      else {
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
      return;
    }
  }
  return;
}

