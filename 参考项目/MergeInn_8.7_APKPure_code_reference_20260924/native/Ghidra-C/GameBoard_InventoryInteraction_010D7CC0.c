// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameBoard.InventoryInteraction 0x10D7CC0; GameBoard::<OnPointerUp>g__InventoryInteraction|65_1()
// Image base: 0x10000; Ghidra address: 010e7cc0; native size hint: 0x264


/* WARNING: Possible PIC construction at 0x010e7e00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x010e7c4c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameBoard_InventoryInteraction_010D7CC0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int unaff_r4;
  int unaff_r5;
  undefined4 uVar5;
  int *unaff_r6;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 unaff_lr;
  
  pcVar6 = (char *)(iRam010e7ee8 + 0x10e7cd8);
  if (*pcVar6 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010e7eec + 0x10e7cec));
    func_0x00f6b160(*(undefined4 *)(iRam010e7ef0 + 0x10e7cf8));
    func_0x00f6b160(*(undefined4 *)(iRam010e7ef4 + 0x10e7d04));
    func_0x00f6b160(*(undefined4 *)(iRam010e7ef8 + 0x10e7d10));
    func_0x00f6b160(*(undefined4 *)(iRam010e7efc + 0x10e7d1c));
    func_0x00f6b160(*(undefined4 *)(iRam010e7f00 + 0x10e7d28));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(param_1 + 0x40);
  if (piVar7 == (int *)0x0) {
    func_0x00f6b3d0();
  }
  iVar8 = piVar7[4];
  if (*(int *)(**(int **)(iRam010e7f04 + 0x10e7d4c) + 0x74) == 0) {
    func_0x00f6b294();
  }
  iVar8 = func_0x020081fc(iVar8,0);
  if (iVar8 == 0) {
    GameBoard_CompleteDrag_010D7A9C(param_1,param_2);
    iVar8 = *(int *)(param_1 + 0x68);
    if (iVar8 == 0) {
      func_0x00f6b3d0();
    }
    iVar8 = (**(code **)(iVar8 + 0xc))
                      (*(undefined4 *)(iVar8 + 0x20),piVar7,*(undefined4 *)(iVar8 + 0x14));
    if (iVar8 != 0) {
      return;
    }
    iVar8 = func_0x00f6b3c4(**(undefined4 **)(iRam010e7f08 + 0x10e7e9c));
    func_0x015334c8(iVar8,**(undefined4 **)(iRam010e7f0c + 0x10e7eb4),0);
    if (*(int *)(**(int **)(iRam010e7f10 + 0x10e7ec8) + 0x74) == 0) {
      func_0x00f6b294();
    }
SUB_0200818c:
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(int **)((int)register0x00000054 + -8) = unaff_r6;
    *(int *)((int)register0x00000054 + -0xc) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x10) = unaff_r4;
    pcVar6 = (char *)(_UNK_03abf438 + 0x3abf32c);
    if (*pcVar6 == '\0') {
      func_0x0200945c(*(undefined4 *)(_UNK_03abf43c + 0x3abf340),0);
      func_0x0200945c(*(undefined4 *)(_UNK_03abf440 + 0x3abf34c));
      *pcVar6 = '\x01';
    }
    piVar7 = *(int **)(_UNK_03abf444 + 0x3abf360);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x02009474();
    }
    pcVar6 = (char *)(_UNK_03abf448 + 0x3abf37c);
    if (*pcVar6 == '\0') {
      func_0x0200945c(*(undefined4 *)(_UNK_03abf44c + 0x3abf390));
      *pcVar6 = '\x01';
    }
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x02009474();
      iVar1 = *piVar7;
    }
    piVar7 = *(int **)(*(int *)(iVar1 + 0x5c) + 4);
    if (piVar7 == (int *)0x0) {
      func_0x02009470();
    }
    iVar1 = *piVar7;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_03abf450 + 0x3abf3d4)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 200);
          goto LAB_03abf41c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x02009538(piVar7,**(int **)(_UNK_03abf450 + 0x3abf3d4),1);
LAB_03abf41c:
                    /* WARNING: Could not recover jumptable at 0x03abf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar7,iVar8,0,puVar2[1]);
    return;
  }
  iVar8 = *(int *)(param_1 + 0x68);
  if (iVar8 == 0) {
    func_0x00f6b3d0();
  }
  iVar8 = (**(code **)(iVar8 + 0xc))
                    (*(undefined4 *)(iVar8 + 0x20),piVar7,*(undefined4 *)(iVar8 + 0x14));
  unaff_r4 = param_1;
  if (iVar8 == 0) {
    iVar8 = func_0x010e84d4(param_1);
    if (iVar8 == 0) {
      iVar8 = func_0x00f6b3c4(**(undefined4 **)(iRam010e7f14 + 0x10e7dbc));
      func_0x015334c8(iVar8,**(undefined4 **)(iRam010e7f18 + 0x10e7dd4),0);
      if (*(int *)(**(int **)(iRam010e7f1c + 0x10e7de8) + 0x74) == 0) {
        func_0x00f6b294();
      }
      unaff_lr = 0x10e7e04;
      unaff_r5 = param_2;
      unaff_r6 = piVar7;
      register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
      goto SUB_0200818c;
    }
    uVar3 = (uint)*(byte *)(**(int **)(iRam010e7f20 + 0x10e7e10) + 0xb8);
    if ((uVar3 <= *(byte *)(*piVar7 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar7 + 100) + uVar3 * 4 + -4) == **(int **)(iRam010e7f20 + 0x10e7e10)))
    {
      func_0x01128a7c(piVar7,0);
    }
  }
  pcVar6 = (char *)(iRam010e7c9c + 0x10e7ab4);
  if (*pcVar6 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010e7ca0 + 0x10e7ac8));
    func_0x00f6b160(*(undefined4 *)(iRam010e7ca4 + 0x10e7ad4));
    func_0x00f6b160(*(undefined4 *)(iRam010e7ca8 + 0x10e7ae0));
    func_0x00f6b160(*(undefined4 *)(iRam010e7cac + 0x10e7aec));
    *pcVar6 = '\x01';
  }
  if (*(char *)(param_1 + 0x30) == '\0') {
    piVar7 = *(int **)(iRam010e7cb0 + 0x10e7b0c);
    uVar5 = *(undefined4 *)(param_1 + 0x40);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x00f6b294();
    }
    iVar8 = func_0x01034b74(uVar5,0,0);
    if (iVar8 != 0) {
      iVar8 = *(int *)(param_1 + 0x40);
      if (iVar8 == 0) {
        func_0x00f6b3d0();
      }
      uVar5 = *(undefined4 *)(iVar8 + 0x10);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x00f6b294();
      }
      iVar8 = func_0x01034b74(uVar5,0,0);
      if (iVar8 != 0) {
        uVar5 = *(undefined4 *)(param_2 + 4);
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x00f6b294();
        }
        iVar8 = func_0x01034b74(uVar5,0,0);
        if (iVar8 != 0) {
          iVar8 = *(int *)(param_1 + 0x40);
          if (iVar8 == 0) {
            func_0x00f6b3d0();
          }
          uVar5 = *(undefined4 *)(param_2 + 4);
          unaff_r6 = *(int **)(iVar8 + 0x10);
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x00f6b294();
          }
          iVar8 = func_0x01034b74(unaff_r6,uVar5,0);
          if ((iVar8 != 0) && (iVar8 = func_0x010e84d4(param_1), iVar8 == 0)) {
            iVar8 = func_0x00f6b3c4(**(undefined4 **)(iRam010e7cb4 + 0x10e7c08));
            func_0x0309903c(iVar8,**(undefined4 **)(iRam010e7cb8 + 0x10e7c20),0);
            if (*(int *)(**(int **)(iRam010e7cbc + 0x10e7c34) + 0x74) == 0) {
              func_0x00f6b294();
            }
            unaff_lr = 0x10e7c50;
            unaff_r5 = iVar8;
            register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
            goto SUB_0200818c;
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  if (*(int *)(param_1 + 0x40) != 0) {
    func_0x0111cc08(*(int *)(param_1 + 0x40),0);
  }
  iVar8 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (iVar8 == 0) {
    func_0x00f6b3d0();
  }
  func_0x010d7f4c(iVar8);
  pcVar6 = (char *)(_UNK_010e3258 + 0x10e31d0);
  if (*pcVar6 == '\0') {
    func_0x00f6b160(*(undefined4 *)(_UNK_010e325c + 0x10e31e4));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e3260 + 0x10e31f0));
    *pcVar6 = '\x01';
  }
  func_0x015063cc(*(undefined4 *)(param_1 + 0x48),0,0);
  uVar5 = func_0x00f6b3c4(**(undefined4 **)(_UNK_010e3264 + 0x10e3214));
  func_0x01590ef4(uVar5,param_1,**(undefined4 **)(_UNK_010e3268 + 0x10e3230),0);
  uVar5 = func_0x01597488(0x40400000,uVar5,1,0);
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  return;
}

