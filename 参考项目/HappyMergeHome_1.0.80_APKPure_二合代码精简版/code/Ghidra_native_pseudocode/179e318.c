
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017ae318(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
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
  
  iVar2 = func_0x02953fd4(0x8e98,0);
  if (iVar2 == 0) {
    iVar2 = FUN_017a2fe8(param_1);
    if (((iVar2 != 0) && (iVar2 = FUN_017ad9d0(param_1,param_2,param_3), iVar2 == 0)) &&
       (iVar2 = FUN_017adaa0(param_1,param_2), iVar2 != 0)) {
      if (param_3 == 0) {
        func_0x026f0640(iVar2,1,0);
      }
      else {
        func_0x026f0584();
      }
      pcVar4 = (char *)(_UNK_017ae300 + 0x17aded4);
      if (*pcVar4 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_017ae304 + 0x17adee8));
        func_0x01438628(*(undefined4 *)(_UNK_017ae308 + 0x17adef4));
        func_0x01438628(*(undefined4 *)(_UNK_017ae30c + 0x17adf00));
        *pcVar4 = '\x01';
      }
      iVar2 = func_0x02953fd4(0x1e99,0);
      if (iVar2 == 0) {
        iVar2 = FUN_017a2fe8(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x6c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar2 + 0x14) == '\0') {
          bVar8 = true;
          iVar2 = 0;
          iVar5 = 0;
          puVar9 = *(undefined4 **)(_UNK_017ae310 + 0x17adfa8);
          puVar10 = *(undefined4 **)(_UNK_017ae314 + 0x17adfb0);
          while( true ) {
            iVar1 = FUN_017a2fe8(param_1);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x6c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0xc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar1 + 0xc) <= iVar2) break;
            iVar1 = FUN_017a2fe8(param_1);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x6c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar1 + 0x10);
            iVar1 = FUN_017a2fe8(param_1);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x6c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0xc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x014e9698(iVar1,iVar2,*puVar9);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar7 = *(undefined4 *)(iVar1 + 0x24);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x024f0f34(iVar6,uVar7,*puVar10);
            if (iVar1 != 0) {
              iVar1 = FUN_017a2fe8(param_1);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = *(int *)(iVar1 + 0x6c);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(iVar1 + 9) != '\0') {
                iVar1 = FUN_017a2fe8(param_1);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = *(int *)(iVar1 + 0x6c);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = *(int *)(iVar1 + 0xc);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = func_0x014e9698(iVar1,iVar2,*puVar9);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar5 = iVar5 + (*(byte *)(iVar1 + 0xd) ^ 1);
              }
              iVar1 = FUN_017a2fe8(param_1);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = *(int *)(iVar1 + 0x6c);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = *(int *)(iVar1 + 0xc);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x014e9698(iVar1,iVar2,*puVar9);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar5 = iVar5 + (*(byte *)(iVar1 + 0xc) ^ 1);
            }
            iVar1 = FUN_017a2fe8(param_1);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x6c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0xc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x014e9698(iVar1,iVar2,*puVar9);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            if (*(char *)(iVar1 + 0xc) == '\0') {
              bVar8 = false;
            }
            else {
              iVar1 = FUN_017a2fe8(param_1);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = *(int *)(iVar1 + 0x6c);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = *(int *)(iVar1 + 0xc);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x014e9698(iVar1,iVar2,*puVar9);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(iVar1 + 0xd) == '\0') {
                bVar8 = false;
              }
            }
            iVar2 = iVar2 + 1;
          }
          if (bVar8) {
            iVar2 = FUN_017a2fe8(param_1);
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
            if (0 < *(int *)(iVar2 + 0xc)) {
              iVar2 = FUN_017a2fe8(param_1);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar2 = *(int *)(iVar2 + 0x6c);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              func_0x026f040c(iVar2,1,0);
            }
          }
          *(int *)(param_1 + 0x54) = iVar5;
        }
        else {
          *(undefined4 *)(param_1 + 0x54) = 0;
        }
        return;
      }
      iVar2 = func_0x029540a4(0x1e99,0);
      if (iVar2 == 0) {
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
      if (*(int *)(iVar2 + 0x10) != 0) {
        func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
      }
      func_0x01523a6c(&uStack_30,param_1,0);
      iVar5 = *(int *)(iVar2 + 8);
      uVar7 = *(undefined4 *)(iVar2 + 0xc);
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar3 = 2;
      if (iVar2 == 0) {
        uVar3 = 1;
      }
      func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar3,0,0);
      return;
    }
  }
  else {
    iVar2 = func_0x029540a4(0x8e98,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    func_0x028849f0(iVar2,param_1,param_2,param_3);
  }
  return;
}

