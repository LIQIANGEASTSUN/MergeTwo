/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.IBoardActivityOutput$$IsSupportOutputType RVA 0x2bf80a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_02c080a4(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_02c08150 + 0x2c080bc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c08154 + 0x2c080d0));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_02c08158 + 0x2c080e8)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02c08130;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02c08158 + 0x2c080e8),0);
LAB_02c08130:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  return iVar1 == param_2;
}



// ===== FAT.IBoardActivityOutput$$IsSupportOutputMethod RVA 0x2bf815c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_02c0815c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  
  pcVar6 = (char *)(_UNK_02c08284 + 0x2c08174);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c08288 + 0x2c08188));
    *pcVar6 = '\x01';
  }
  iVar1 = *param_1;
  piVar7 = *(int **)(_UNK_02c0828c + 0x2c081a0);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar3 = *piVar7;
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == iVar3) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 200);
        goto LAB_02c081e8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar3,1);
LAB_02c081e8:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  if (iVar1 == 3) {
    return param_2 - 1U < 2;
  }
  iVar1 = *param_1;
  iVar3 = *piVar7;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar3) {
        puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 200);
        goto LAB_02c08264;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar3,1);
LAB_02c08264:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  return iVar1 == param_2;
}



// ===== FAT.IBoardActivityOutput$$TryUpdateOrderRewardBR RVA 0x2bf8290 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c08290(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_02c086cc + 0x2c082b0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c086d0 + 0x2c082c8));
    func_0x01384978(*(undefined4 *)(_UNK_02c086d4 + 0x2c082d4));
    func_0x01384978(*(undefined4 *)(_UNK_02c086d8 + 0x2c082e0));
    func_0x01384978(*(undefined4 *)(_UNK_02c086dc + 0x2c082ec));
    *pcVar8 = '\x01';
  }
  uVar9 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    uVar6 = (uint)*(byte *)(**(int **)(_UNK_02c086e0 + 0x2c08308) + 0xb8);
    if ((uVar6 <= *(byte *)(iVar1 + 0xb8)) &&
       (uVar9 = 0,
       *(int *)(*(int *)(iVar1 + 100) + uVar6 * 4 + -4) == **(int **)(_UNK_02c086e0 + 0x2c08308))) {
      piVar10 = *(int **)(_UNK_02c086e4 + 0x2c0835c);
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar10) {
            puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xe8);
            goto LAB_02c083a4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,5);
LAB_02c083a4:
      iVar1 = (*(code *)*puVar2)(param_1,2,puVar2[1]);
      if (iVar1 != 0) {
        if (param_2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *param_2;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_02c086e8 + 0x2c083dc)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x268);
              goto LAB_02c08424;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_02c086e8 + 0x2c083dc),0x35);
LAB_02c08424:
        iVar1 = (*(code *)*puVar2)(param_2,puVar2[1]);
        if (iVar1 == 0) {
          if (param_2 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01e40318(param_2,0x15,0);
          if (iVar1 != 0) {
            iVar1 = *(int *)(iVar1 + 0x10);
            if (param_1 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar3 = FUN_02b449f8(param_1,0);
            if (iVar1 == iVar3) {
              return 0;
            }
          }
          if (param_2 == (int *)0x0) {
            func_0x01384bf0();
            uVar9 = func_0x01e3e5b8(0,0xc,0);
            func_0x01384bf0();
          }
          else {
            uVar9 = func_0x01e3e5b8(param_2,0xc,0);
          }
          uVar4 = func_0x01e3e5b8(param_2,0xd,0);
          iVar1 = *param_1;
          uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar7[-1] == *piVar10) {
                puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x100);
                goto LAB_02c08530;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,8);
LAB_02c08530:
          iVar1 = (*(code *)*puVar2)(param_1,uVar9,param_3,param_4,&uStack_28,&uStack_2c,puVar2[1]);
          if (iVar1 == 0) {
            iVar1 = *param_1;
            uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar7[-1] == *piVar10) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x108);
                  goto LAB_02c0860c;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar6 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,9);
LAB_02c0860c:
            iVar1 = (*(code *)*puVar2)(param_1,uVar4,param_3,param_4,&uStack_30,&uStack_34,puVar2[1]
                                      );
            if (iVar1 == 0) {
              return 0;
            }
            piVar10 = *(int **)(_UNK_02c086f0 + 0x2c08654);
            iVar1 = *piVar10;
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x01384ab4();
              iVar1 = *piVar10;
            }
            iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x10);
            if (param_1 == (int *)0x0) {
              func_0x01384bf0();
            }
            uVar5 = FUN_02b449f8(param_1,0);
            uVar9 = uStack_30;
            uVar4 = uStack_34;
          }
          else {
            piVar10 = *(int **)(_UNK_02c086ec + 0x2c08574);
            iVar1 = *piVar10;
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x01384ab4();
              iVar1 = *piVar10;
            }
            iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x10);
            if (param_1 == (int *)0x0) {
              func_0x01384bf0();
            }
            uVar5 = FUN_02b449f8(param_1,0);
            uVar9 = uStack_28;
            uVar4 = uStack_2c;
          }
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x01e4b8f0(iVar1,param_2,uVar5,uVar4,uVar9,0);
          uVar9 = 1;
        }
      }
    }
  }
  return uVar9;
}



// ===== FAT.IBoardActivityOutput$$TryUpdateOrderRewardV2 RVA 0x2bf86f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c086f4(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_02c08b40 + 0x2c08714);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c08b44 + 0x2c0872c));
    func_0x01384978(*(undefined4 *)(_UNK_02c08b48 + 0x2c08738));
    func_0x01384978(*(undefined4 *)(_UNK_02c08b4c + 0x2c08744));
    *pcVar9 = '\x01';
  }
  uVar10 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    uVar7 = (uint)*(byte *)(**(int **)(_UNK_02c08b50 + 0x2c08760) + 0xb8);
    if ((uVar7 <= *(byte *)(iVar1 + 0xb8)) &&
       (uVar10 = 0,
       *(int *)(*(int *)(iVar1 + 100) + uVar7 * 4 + -4) == **(int **)(_UNK_02c08b50 + 0x2c08760))) {
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_02c08b54 + 0x2c087b4)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xe8);
            goto LAB_02c087fc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02c08b54 + 0x2c087b4),5);
LAB_02c087fc:
      iVar1 = (*(code *)*puVar2)(param_1,2,puVar2[1]);
      if (iVar1 != 0) {
        if (param_2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *param_2;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar8[-1] == **(int **)(_UNK_02c08b58 + 0x2c08834)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x268);
              goto LAB_02c0887c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_02c08b58 + 0x2c08834),0x35);
LAB_02c0887c:
        iVar1 = (*(code *)*puVar2)(param_2,puVar2[1]);
        if (iVar1 == 0) {
          if (param_1 == (int *)0x0) {
            func_0x01384bf0();
          }
          uVar10 = FUN_02b449f8(param_1,0);
          iVar1 = func_0x01e4b758(param_2,uVar10,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar11 = *(undefined4 *)(iVar1 + 8);
          if (param_2 == (int *)0x0) {
            func_0x01384bf0();
          }
          uVar10 = 0;
          iVar3 = func_0x01e3e5b8(param_2,uVar11,0);
          if (param_1 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar4 = FUN_02b449f8(param_1,0);
          if (iVar3 != iVar4) {
            if (param_2 == (int *)0x0) {
              func_0x01384bf0();
              uVar10 = func_0x01e3e5b8(0,0xc,0);
              func_0x01384bf0();
            }
            else {
              uVar10 = func_0x01e3e5b8(param_2,0xc,0);
            }
            uVar11 = func_0x01e3e5b8(param_2,0xd,0);
            iVar3 = *param_1;
            uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
              do {
                if (piVar8[-1] == **(int **)(_UNK_02c08b5c + 0x2c08978)) {
                  puVar2 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0x100);
                  goto LAB_02c089c0;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar7 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02c08b5c + 0x2c08978),8);
LAB_02c089c0:
            iVar3 = (*(code *)*puVar2)(param_1,uVar10,param_3,param_4,&uStack_28,&uStack_2c,
                                       puVar2[1]);
            if (iVar3 == 0) {
              iVar3 = *param_1;
              uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                do {
                  if (piVar8[-1] == **(int **)(_UNK_02c08b60 + 0x2c08a60)) {
                    puVar2 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0x108);
                    goto LAB_02c08aa8;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 2;
                } while (uVar7 != 0);
              }
              puVar2 = (undefined4 *)
                       func_0x014002dc(param_1,**(int **)(_UNK_02c08b60 + 0x2c08a60),9);
LAB_02c08aa8:
              iVar3 = (*(code *)*puVar2)(param_1,uVar11,param_3,param_4,&uStack_30,&uStack_34,
                                         puVar2[1]);
              uVar10 = 1;
              if (iVar3 != 0) {
                if (param_1 == (int *)0x0) {
                  func_0x01384bf0();
                }
                uVar6 = FUN_02b449f8(param_1,0);
                uVar5 = uStack_30;
                uVar11 = uStack_34;
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                func_0x01e4ba84(iVar1,param_2,uVar6,uVar11,uVar5,0);
              }
            }
            else {
              if (param_1 == (int *)0x0) {
                func_0x01384bf0();
              }
              uVar5 = FUN_02b449f8(param_1,0);
              uVar11 = uStack_28;
              uVar10 = uStack_2c;
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              func_0x01e4ba84(iVar1,param_2,uVar5,uVar10,uVar11,0);
              uVar10 = 1;
            }
          }
        }
      }
    }
  }
  return uVar10;
}



// ===== FAT.IBoardActivityOutput$$TryGetOrderRewardBRInfo RVA 0x2bf8b64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_02c08b64(undefined4 param_1,int param_2,undefined4 param_3,int *param_4,int *param_5,
                 int *param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  
  pcVar8 = (char *)(_UNK_02c08df8 + 0x2c08b84);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c08dfc + 0x2c08ba0));
    func_0x01384978(*(undefined4 *)(_UNK_02c08e00 + 0x2c08bac));
    func_0x01384978(*(undefined4 *)(_UNK_02c08e04 + 0x2c08bb8));
    func_0x01384978(*(undefined4 *)(_UNK_02c08e08 + 0x2c08bc4));
    *pcVar8 = '\x01';
  }
  *param_5 = 0;
  *param_6 = 0;
  if (param_4 != (int *)0x0) {
    iVar1 = *param_4;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_02c08e0c + 0x2c08bf0)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_02c08c38;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_4,**(int **)(_UNK_02c08e0c + 0x2c08bf0),0);
LAB_02c08c38:
    iVar1 = (*(code *)*puVar2)(param_4,puVar2[1]);
    if (0 < iVar1) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01ca6648(iVar1,param_3,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar1 + 0x1c);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar9 + 0xc) != 0) {
        iVar9 = 0;
        puVar2 = *(undefined4 **)(_UNK_02c08e10 + 0x2c08cc4);
        piVar6 = *(int **)(_UNK_02c08e14 + 0x2c08ccc);
        while( true ) {
          iVar10 = *(int *)(iVar1 + 0x20);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar10 + 0xc) <= iVar9) break;
          iVar10 = *(int *)(iVar1 + 0x20);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar10 = func_0x0364c9b8(iVar10,iVar9,*puVar2);
          if (iVar10 <= param_2) {
            iVar10 = *param_4;
            uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
            if (uVar5 != 0) {
              piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
              do {
                if (piVar7[-1] == *piVar6) {
                  puVar3 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
                  goto LAB_02c08d5c;
                }
                uVar5 = uVar5 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined4 *)func_0x014002dc(param_4,*piVar6,0);
LAB_02c08d5c:
            iVar10 = (*(code *)*puVar3)(param_4,iVar9,puVar3[1]);
            *param_5 = iVar10;
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar10 = *(int *)(iVar1 + 0x1c);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            uVar4 = func_0x0364c9b8(iVar10,iVar9,*puVar2);
            iVar10 = func_0x01457ae8(param_2,uVar4);
            if (iVar10 < 2) {
              iVar10 = 1;
            }
            *param_6 = iVar10;
          }
          iVar9 = iVar9 + 1;
        }
        if (0 < *param_5) {
          return 0 < *param_6;
        }
      }
    }
  }
  return false;
}



// ===== FAT.IBoardActivityOutput$$TryGetOrderRewardBRInfoAct RVA 0x2bf8e18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_02c08e18(undefined4 param_1,int param_2,undefined4 param_3,int *param_4,int *param_5,
                 int *param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  
  pcVar8 = (char *)(_UNK_02c090ac + 0x2c08e38);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c090b0 + 0x2c08e54));
    func_0x01384978(*(undefined4 *)(_UNK_02c090b4 + 0x2c08e60));
    func_0x01384978(*(undefined4 *)(_UNK_02c090b8 + 0x2c08e6c));
    func_0x01384978(*(undefined4 *)(_UNK_02c090bc + 0x2c08e78));
    *pcVar8 = '\x01';
  }
  *param_5 = 0;
  *param_6 = 0;
  if (param_4 != (int *)0x0) {
    iVar1 = *param_4;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_02c090c0 + 0x2c08ea4)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_02c08eec;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_4,**(int **)(_UNK_02c090c0 + 0x2c08ea4),0);
LAB_02c08eec:
    iVar1 = (*(code *)*puVar2)(param_4,puVar2[1]);
    if (0 < iVar1) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01ca6648(iVar1,param_3,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar1 + 0x14);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar9 + 0xc) != 0) {
        iVar9 = 0;
        puVar2 = *(undefined4 **)(_UNK_02c090c4 + 0x2c08f78);
        piVar6 = *(int **)(_UNK_02c090c8 + 0x2c08f80);
        while( true ) {
          iVar10 = *(int *)(iVar1 + 0x18);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar10 + 0xc) <= iVar9) break;
          iVar10 = *(int *)(iVar1 + 0x18);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar10 = func_0x0364c9b8(iVar10,iVar9,*puVar2);
          if (iVar10 <= param_2) {
            iVar10 = *param_4;
            uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
            if (uVar5 != 0) {
              piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
              do {
                if (piVar7[-1] == *piVar6) {
                  puVar3 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
                  goto LAB_02c09010;
                }
                uVar5 = uVar5 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined4 *)func_0x014002dc(param_4,*piVar6,0);
LAB_02c09010:
            iVar10 = (*(code *)*puVar3)(param_4,iVar9,puVar3[1]);
            *param_5 = iVar10;
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar10 = *(int *)(iVar1 + 0x14);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            uVar4 = func_0x0364c9b8(iVar10,iVar9,*puVar2);
            iVar10 = func_0x01457ae8(param_2,uVar4);
            if (iVar10 < 2) {
              iVar10 = 1;
            }
            *param_6 = iVar10;
          }
          iVar9 = iVar9 + 1;
        }
        if (0 < *param_5) {
          return 0 < *param_6;
        }
      }
    }
  }
  return false;
}



// ===== FAT.IBoardActivityOutput$$IsValidForOrder RVA 0x2bf90cc =====

undefined4 FUN_02c090cc(void)

{
  return 0;
}



// ===== FAT.IBoardActivityOutput$$GetFlyType RVA 0x2bf90d4 =====

undefined4 FUN_02c090d4(void)

{
  return 0;
}



// ===== FAT.IBoardActivityOutput$$GetReasonString RVA 0x2bf90dc =====

undefined4 FUN_02c090dc(void)

{
  return 0;
}



// ===== FAT.IBoardActivityOutput$$TrackOrderGetItem RVA 0x2bf90e4 =====

void FUN_02c090e4(void)

{
  return;
}



// ===== FAT.IBoardActivityOutput$$FlyAndCommitOrderReward RVA 0x2bf90e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c090e8(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar10 = (char *)(_UNK_02c095fc + 0x2c0910c);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c09600 + 0x2c09120));
    func_0x01384978(*(undefined4 *)(_UNK_02c09604 + 0x2c0912c));
    func_0x01384978(*(undefined4 *)(_UNK_02c09608 + 0x2c09138));
    func_0x01384978(*(undefined4 *)(_UNK_02c0960c + 0x2c09144));
    func_0x01384978(*(undefined4 *)(_UNK_02c09610 + 0x2c09150));
    func_0x01384978(*(undefined4 *)(_UNK_02c09614 + 0x2c0915c));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x40);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *param_2;
  piVar11 = *(int **)(_UNK_02c09618 + 0x2c0919c);
  uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
  iVar7 = *piVar11;
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar9[-1] == iVar7) {
        puVar3 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0x1f8);
        goto LAB_02c091e4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,iVar7,0x27);
LAB_02c091e4:
  uVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *param_2;
  iVar7 = *piVar11;
  uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar8 != 0) {
    piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar11[-1] == iVar7) {
        puVar3 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0x1f0);
        goto LAB_02c09254;
      }
      uVar8 = uVar8 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,iVar7,0x26);
LAB_02c09254:
  uVar5 = (*(code *)*puVar3)(param_2,puVar3[1]);
  iVar2 = *param_1;
  uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar8 != 0) {
    piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar11[-1] == **(int **)(_UNK_02c0961c + 0x2c09278)) {
        puVar3 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0x120);
        goto LAB_02c092c0;
      }
      uVar8 = uVar8 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02c0961c + 0x2c09278),0xc);
LAB_02c092c0:
  uVar6 = (*(code *)*puVar3)(param_1,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01cdcbac(iVar1,uVar4,uVar5,uVar6,0,0,0,0xb2,
                          **(undefined4 **)(_UNK_02c09620 + 0x2c092f4),
                          **(undefined4 **)(_UNK_02c09624 + 0x2c09300),0);
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x40);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01cdf088(iVar2,iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *param_1;
  uVar4 = *(undefined4 *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0x10);
  uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar8 != 0) {
    piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar11[-1] == **(int **)(_UNK_02c09628 + 0x2c09384)) {
        puVar3 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0x118);
        goto LAB_02c093dc;
      }
      uVar8 = uVar8 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02c09628 + 0x2c09384),0xb);
LAB_02c093dc:
  uVar6 = (*(code *)*puVar3)(param_1,puVar3[1]);
  if (*(int *)(**(int **)(_UNK_02c0962c + 0x2c093fc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x0204f2f0(&uStack_30,uVar6,0);
  iVar2 = *param_1;
  uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar8 != 0) {
    piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar11[-1] == **(int **)(_UNK_02c09630 + 0x2c09434)) {
        puVar3 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0x118);
        goto LAB_02c0947c;
      }
      uVar8 = uVar8 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02c09630 + 0x2c09434),0xb);
LAB_02c0947c:
  uVar6 = (*(code *)*puVar3)(param_1,puVar3[1]);
  if (*(int *)(**(int **)(_UNK_02c09634 + 0x2c094a0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x0207405c(uVar4,uVar5,param_3,param_4,param_5,uStack_30,uStack_2c,uStack_28,2,uVar6,0,0,0,0,
                  0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = *(undefined4 *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0x10);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar8 != 0) {
    piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar11[-1] == **(int **)(_UNK_02c09638 + 0x2c0951c)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0x130);
        goto LAB_02c09564;
      }
      uVar8 = uVar8 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_02c09638 + 0x2c0951c),0xe);
LAB_02c09564:
  uVar6 = (*(code *)*puVar3)(param_2,0xc,puVar3[1]);
  iVar1 = *param_1;
  uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar8 != 0) {
    piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar11[-1] == **(int **)(_UNK_02c0963c + 0x2c0958c)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0x128);
        goto LAB_02c095d4;
      }
      uVar8 = uVar8 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02c0963c + 0x2c0958c),0xd);
LAB_02c095d4:
  (*(code *)*puVar3)(param_1,uVar4,uVar5,uVar6,puVar3[1]);
  return;
}



// ===== FAT.IBoardActivityOutput$$FlyAndCommitOrderRewardV2 RVA 0x2bf9640 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c09640(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_02c09a58 + 0x2c09664);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c09a5c + 0x2c09678));
    func_0x01384978(*(undefined4 *)(_UNK_02c09a60 + 0x2c09684));
    func_0x01384978(*(undefined4 *)(_UNK_02c09a64 + 0x2c09690));
    func_0x01384978(*(undefined4 *)(_UNK_02c09a68 + 0x2c0969c));
    func_0x01384978(*(undefined4 *)(_UNK_02c09a6c + 0x2c096a8));
    func_0x01384978(*(undefined4 *)(_UNK_02c09a70 + 0x2c096b4));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *param_1;
  piVar10 = *(int **)(_UNK_02c09a74 + 0x2c096e4);
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  iVar1 = *(int *)(iVar1 + 0x40);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar8[-1] == *piVar10) {
        puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0x120);
        goto LAB_02c09730;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0xc);
LAB_02c09730:
  uVar4 = (*(code *)*puVar3)(param_1,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01cdcbac(iVar1,param_3,param_4,uVar4,0,0,0,0xbd,
                          **(undefined4 **)(_UNK_02c09a78 + 0x2c09764),
                          **(undefined4 **)(_UNK_02c09a7c + 0x2c09770),0);
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x40);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01cdf088(iVar2,iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *param_1;
  uVar4 = *(undefined4 *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0x10);
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar8[-1] == *piVar10) {
        puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0x118);
        goto LAB_02c09844;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0xb);
LAB_02c09844:
  uVar5 = (*(code *)*puVar3)(param_1,puVar3[1]);
  if (*(int *)(**(int **)(_UNK_02c09a80 + 0x2c09864) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x0204f2f0(&uStack_30,uVar5,0);
  iVar2 = *param_1;
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar8[-1] == *piVar10) {
        puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0x118);
        goto LAB_02c098dc;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0xb);
LAB_02c098dc:
  uVar5 = (*(code *)*puVar3)(param_1,puVar3[1]);
  if (*(int *)(**(int **)(_UNK_02c09a84 + 0x2c09900) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x0207405c(uVar4,uVar7,param_5,param_6,param_7,uStack_30,uStack_2c,uStack_28,2,uVar5,0,0,0,0,
                  0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar7 = *(undefined4 *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0x10);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_02c09a88 + 0x2c09980)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x130);
        goto LAB_02c099c8;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_02c09a88 + 0x2c09980),0xe);
LAB_02c099c8:
  uVar5 = (*(code *)*puVar3)(param_2,0xc,puVar3[1]);
  iVar1 = *param_1;
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar8[-1] == *piVar10) {
        puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x128);
        goto LAB_02c09a30;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0xd);
LAB_02c09a30:
  (*(code *)*puVar3)(param_1,uVar7,uVar4,uVar5,puVar3[1]);
  return;
}


