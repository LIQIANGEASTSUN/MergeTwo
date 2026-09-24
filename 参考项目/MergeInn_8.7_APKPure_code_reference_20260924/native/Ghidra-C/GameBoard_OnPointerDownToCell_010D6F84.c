// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameBoard.OnPointerDownToCell 0x10D6F84; private void OnPointerDownToCell(Cell clickedCell) {
// Image base: 0x10000; Ghidra address: 010e6f84; native size hint: 0x2B0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameBoard_OnPointerDownToCell_010D6F84(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar3 = (char *)(iRam010e7210 + 0x10e6f9c);
  if (*pcVar3 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010e7214 + 0x10e6fb0));
    func_0x00f6b160(*(undefined4 *)(iRam010e7218 + 0x10e6fbc));
    func_0x00f6b160(*(undefined4 *)(iRam010e721c + 0x10e6fc8));
    func_0x00f6b160(*(undefined4 *)(iRam010e7220 + 0x10e6fd4));
    *pcVar3 = '\x01';
  }
  if (*(char *)(param_1 + 0x4c) == '\0') {
    piVar9 = *(int **)(iRam010e7224 + 0x10e6ff4);
    uVar4 = *(undefined4 *)(param_1 + 0x40);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x00f6b294();
    }
    iVar1 = func_0x020081fc(uVar4,0);
    if (iVar1 == 0) {
      iVar1 = *piVar9;
      *(undefined1 *)(param_1 + 0x30) = 0;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x00f6b294();
      }
      iVar1 = func_0x01034b74(param_2,0,0);
      if (iVar1 != 0) {
        if (param_2 == 0) {
          func_0x00f6b3d0();
        }
        iVar1 = func_0x010dd230(param_2);
        if (iVar1 == 0) {
          return;
        }
      }
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x00f6b294();
      }
      iVar1 = func_0x020081fc(param_2,0);
      if (iVar1 != 0) {
        if (param_2 == 0) {
          func_0x00f6b3d0();
        }
        if (*(char *)(param_2 + 0x28) == '\0') {
          uVar8 = *(undefined4 *)(param_2 + 0x24);
          uVar4 = *(undefined4 *)(param_1 + 0x44);
          if (*(int *)(*piVar9 + 0x74) == 0) {
            func_0x00f6b294();
          }
          iVar1 = func_0x01034b74(uVar4,uVar8,0);
          if (iVar1 != 0) {
            func_0x010e56ec(param_1,0);
            piVar5 = *(int **)(iRam010e7228 + 0x10e70f8);
            iVar1 = *piVar5;
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x00f6b294();
              iVar1 = *piVar5;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x24);
            if (*(int *)(**(int **)(iRam010e722c + 0x10e7118) + 0x74) == 0) {
              func_0x00f6b294(**(int **)(iRam010e722c + 0x10e7118));
            }
            func_0x011eea64(uVar4,0x3f800000,0);
            func_0x010e436c(param_1,param_2);
          }
          iVar1 = *(int *)(param_2 + 0x24);
          *(int *)(param_1 + 0x40) = iVar1;
          if (iVar1 == 0) {
            func_0x00f6b3d0();
          }
          uVar4 = func_0x02007eac(iVar1,0);
          func_0x015a7b00(uVar4,1,0);
        }
      }
      uVar4 = *(undefined4 *)(param_1 + 0x40);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x00f6b294();
      }
      iVar1 = func_0x020081fc(uVar4,0);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x40);
        if (iVar1 == 0) {
          func_0x00f6b3d0();
        }
        if (*(char *)(iVar1 + 0x38) == '\0') {
          iVar1 = **(int **)(**(int **)(iRam010e7230 + 0x10e71d0) + 0x5c);
          if (iVar1 == 0) {
            func_0x00f6b3d0();
          }
          iVar1 = func_0x015354bc(iVar1,0);
          if (iVar1 == 0) {
            func_0x010e3cf8(param_1);
            func_0x015063cc(*(undefined4 *)(param_1 + 0x48),0,0);
            iVar1 = *(int *)(param_1 + 0x50);
            if (iVar1 == 0) {
              func_0x00f6b3d0();
            }
            pcVar3 = (char *)(_UNK_011315a8 + 0x1131358);
            if (*pcVar3 == '\0') {
              func_0x00f6b160(*(undefined4 *)(_UNK_011315ac + 0x113136c),0);
              func_0x00f6b160(*(undefined4 *)(_UNK_011315b0 + 0x1131378));
              func_0x00f6b160(*(undefined4 *)(_UNK_011315b4 + 0x1131384));
              func_0x00f6b160(*(undefined4 *)(_UNK_011315b8 + 0x1131390));
              func_0x00f6b160(*(undefined4 *)(_UNK_011315bc + 0x113139c));
              func_0x00f6b160(*(undefined4 *)(_UNK_011315c0 + 0x11313a8));
              func_0x00f6b160(*(undefined4 *)(_UNK_011315c4 + 0x11313b4));
              *pcVar3 = '\x01';
            }
            iVar6 = *(int *)(iVar1 + 0x10);
            uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            piStack_24 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            uStack_30 = 0;
            if (iVar6 == 0) {
              func_0x00f6b3d0();
            }
            func_0x010d9db4(iVar6,0);
            func_0x015063cc(*(undefined4 *)(iVar1 + 0x18),0,0);
            iVar6 = *(int *)(iVar1 + 0xc);
            if (iVar6 == 0) {
              func_0x00f6b3d0();
            }
            func_0x02c0384c(&uStack_40,iVar6,**(undefined4 **)(_UNK_011315c8 + 0x113141c));
            uStack_30 = uStack_40;
            uStack_2c = puStack_3c;
            uStack_28 = uStack_38;
            piStack_24 = piStack_34;
            uStack_40 = 0;
            puVar7 = *(undefined4 **)(_UNK_011315cc + 0x113143c);
            piVar9 = *(int **)(_UNK_011315d0 + 0x1131444);
            puStack_3c = &uStack_30;
            while (iVar6 = func_0x02735d78(&uStack_30,*puVar7), piVar5 = piStack_24, iVar6 != 0) {
              if (*(int *)(*piVar9 + 0x74) == 0) {
                func_0x00f6b294();
              }
              iVar6 = func_0x020081fc(piVar5,0);
              if (iVar6 != 0) {
                if (piVar5 == (int *)0x0) {
                  func_0x00f6b3d0();
                }
                (**(code **)(*piVar5 + 0x138))(piVar5,0,0,*(undefined4 *)(*piVar5 + 0x13c));
              }
            }
            func_0x02735d74(&uStack_30,**(undefined4 **)(_UNK_011315d4 + 0x11314b8));
            uVar4 = *(undefined4 *)(iVar1 + 0x1c);
            if (*(int *)(**(int **)(_UNK_011315dc + 0x11314cc) + 0x74) == 0) {
              func_0x00f6b294();
            }
            func_0x011ef590(uVar4,0);
            iVar6 = *(int *)(iVar1 + 0xc);
            if (iVar6 == 0) {
              func_0x00f6b3d0();
            }
            iVar2 = *(int *)(iVar6 + 0xc);
            *(undefined4 *)(iVar6 + 0xc) = 0;
            *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
            if (0 < iVar2) {
              func_0x03080838(*(undefined4 *)(iVar6 + 8),0,iVar2,0);
            }
            iVar1 = *(int *)(iVar1 + 0x14);
            if (iVar1 == 0) {
              func_0x00f6b3d0();
            }
            (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
            return;
          }
        }
      }
    }
  }
  return;
}

