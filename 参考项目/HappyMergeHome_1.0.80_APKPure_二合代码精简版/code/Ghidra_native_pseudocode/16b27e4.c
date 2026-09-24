
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c27e4(int param_1,undefined4 param_2)

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
  
  iVar3 = func_0x02953fd4(0x893c,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x893c,0);
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
  iVar3 = func_0x016b6be8(param_1);
  if (iVar3 != 0) {
    iVar3 = FUN_016c2544(param_1,param_2);
    if (iVar3 != 0) {
      return;
    }
    iVar3 = FUN_016c239c(param_1,param_2);
    if (iVar3 != 0) {
      func_0x026ecbfc(iVar3,1,0);
      pcVar5 = (char *)(_UNK_016c2174 + 0x16c1cc4);
      if (*pcVar5 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_016c2178 + 0x16c1cd8));
        func_0x01438628(*(undefined4 *)(_UNK_016c217c + 0x16c1ce4));
        func_0x01438628(*(undefined4 *)(_UNK_016c2180 + 0x16c1cf0));
        *pcVar5 = '\x01';
      }
      iVar3 = func_0x02953fd4(0x1eb8,0);
      if (iVar3 != 0) {
        iVar3 = func_0x029540a4(0x1eb8,0);
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
      iVar3 = func_0x016b6be8(param_1);
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
        puVar10 = *(undefined4 **)(_UNK_016c2184 + 0x16c1d98);
        puVar11 = *(undefined4 **)(_UNK_016c2188 + 0x16c1da0);
        while( true ) {
          iVar2 = func_0x016b6be8(param_1);
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
          iVar2 = func_0x016b6be8(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x6c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar2 + 0x10);
          iVar2 = func_0x016b6be8(param_1);
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
            iVar2 = func_0x016b6be8(param_1);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x6c);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (*(char *)(iVar2 + 9) != '\0') {
              iVar2 = func_0x016b6be8(param_1);
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
            iVar2 = func_0x016b6be8(param_1);
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
            iVar2 = func_0x016b6be8(param_1);
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
          iVar2 = func_0x016b6be8(param_1);
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
LAB_016c211c:
            bVar9 = false;
          }
          else {
            iVar2 = func_0x016b6be8(param_1);
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
            if (*(char *)(iVar2 + 0xd) == '\0') goto LAB_016c211c;
            iVar2 = func_0x016b6be8(param_1);
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
          iVar3 = func_0x016b6be8(param_1);
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

