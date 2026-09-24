
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0196b120(int param_1)

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
  
  pcVar5 = (char *)(_UNK_0196b284 + 0x196b134);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0196b288 + 0x196b148));
    func_0x01438628(*(undefined4 *)(_UNK_0196b28c + 0x196b154));
    func_0x01438628(*(undefined4 *)(_UNK_0196b290 + 0x196b160));
    func_0x01438628(*(undefined4 *)(_UNK_0196b294 + 0x196b16c));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1f95,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_0196b298 + 0x196b1c4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0196b29c + 0x196b1e0));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x14);
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0xc))) {
      iVar6 = FUN_019600b0(param_1);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x6c);
      iVar2 = func_0x0152983c(iVar2,0,**(undefined4 **)(_UNK_0196b2a0 + 0x196b234));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x20);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x026ec598(iVar6,iVar2 == 1,0);
    }
    pcVar5 = (char *)(_UNK_0196b76c + 0x196b2bc);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0196b770 + 0x196b2d0));
      func_0x01438628(*(undefined4 *)(_UNK_0196b774 + 0x196b2dc));
      func_0x01438628(*(undefined4 *)(_UNK_0196b778 + 0x196b2e8));
      *pcVar5 = '\x01';
    }
    iVar2 = func_0x02953fd4(0x1f97,0);
    if (iVar2 == 0) {
      iVar2 = FUN_019600b0(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x6c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar2 + 0x14) == '\0') {
        bVar9 = true;
        iVar2 = 0;
        iVar6 = 0;
        puVar10 = *(undefined4 **)(_UNK_0196b77c + 0x196b390);
        puVar11 = *(undefined4 **)(_UNK_0196b780 + 0x196b398);
        while( true ) {
          iVar3 = FUN_019600b0(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x6c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0xc);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar3 + 0xc) <= iVar2) break;
          iVar3 = FUN_019600b0(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x6c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x10);
          iVar3 = FUN_019600b0(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x6c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0xc);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x014e9698(iVar3,iVar2,*puVar10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar8 = *(undefined4 *)(iVar3 + 0x24);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x024f0f34(iVar7,uVar8,*puVar11);
          if (iVar3 != 0) {
            iVar3 = FUN_019600b0(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x6c);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (*(char *)(iVar3 + 9) != '\0') {
              iVar3 = FUN_019600b0(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0x6c);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0xc);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = func_0x014e9698(iVar3,iVar2,*puVar10);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar6 = iVar6 + (*(byte *)(iVar3 + 0xd) ^ 1);
            }
            iVar3 = FUN_019600b0(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x6c);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0xc);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x014e9698(iVar3,iVar2,*puVar10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            bVar1 = *(byte *)(iVar3 + 0xc);
            iVar3 = FUN_019600b0(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x6c);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0xc);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x014e9698(iVar3,iVar2,*puVar10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar6 = iVar6 + (bVar1 ^ 1) + (*(byte *)(iVar3 + 0x28) ^ 1);
          }
          iVar3 = FUN_019600b0(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x6c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0xc);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x014e9698(iVar3,iVar2,*puVar10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (*(char *)(iVar3 + 0xc) == '\0') {
LAB_0196b714:
            bVar9 = false;
          }
          else {
            iVar3 = FUN_019600b0(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x6c);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0xc);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x014e9698(iVar3,iVar2,*puVar10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (*(char *)(iVar3 + 0xd) == '\0') goto LAB_0196b714;
            iVar3 = FUN_019600b0(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x6c);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0xc);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x014e9698(iVar3,iVar2,*puVar10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (*(char *)(iVar3 + 0x28) == '\0') {
              bVar9 = false;
            }
          }
          iVar2 = iVar2 + 1;
        }
        if (bVar9) {
          iVar2 = FUN_019600b0(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x6c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x026ec720(iVar2,1,0);
        }
        *(int *)(param_1 + 0x54) = iVar6;
      }
      else {
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
      return;
    }
    iVar2 = func_0x029540a4(0x1f97,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar2 = func_0x029540a4(0x1f95,0);
    if (iVar2 == 0) {
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar6 = *(int *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar4,0,0);
  return;
}

