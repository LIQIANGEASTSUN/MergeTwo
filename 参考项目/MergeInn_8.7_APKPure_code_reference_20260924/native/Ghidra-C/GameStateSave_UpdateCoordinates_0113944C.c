// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameStateSave.UpdateCoordinates 0x113944C; GameStateSave::UpdateCoordinates()
// Image base: 0x10000; Ghidra address: 0114944c; native size hint: 0x4CC


bool GameStateSave_UpdateCoordinates_0113944C
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(iRam011498a4 + 0x114946c);
  uStack_20 = param_3;
  uStack_1c = param_4;
  if (*pcVar6 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam011498a8 + 0x1149484));
    func_0x00f6b160(*(undefined4 *)(iRam011498ac + 0x1149490));
    func_0x00f6b160(*(undefined4 *)(iRam011498b0 + 0x114949c));
    func_0x00f6b160(*(undefined4 *)(iRam011498b4 + 0x11494a8));
    func_0x00f6b160(*(undefined4 *)(iRam011498b8 + 0x11494b4));
    func_0x00f6b160(*(undefined4 *)(iRam011498bc + 0x11494c0));
    func_0x00f6b160(*(undefined4 *)(iRam011498c0 + 0x11494cc));
    func_0x00f6b160(*(undefined4 *)(iRam011498c4 + 0x11494d8));
    func_0x00f6b160(*(undefined4 *)(iRam011498c8 + 0x11494e4));
    func_0x00f6b160(*(undefined4 *)(iRam011498cc + 0x11494f0));
    func_0x00f6b160(*(undefined4 *)(iRam011498d0 + 0x11494fc));
    func_0x00f6b160(*(undefined4 *)(iRam011498d4 + 0x1149508));
    *pcVar6 = '\x01';
  }
  uStack_24 = 0;
  iVar1 = func_0x00f6b3c4(**(undefined4 **)(iRam011498d8 + 0x1149520));
  func_0x030a53ec(iVar1,0);
  if (iVar1 == 0) {
    func_0x00f6b3d0();
  }
  puVar2 = *(undefined4 **)(iRam011498dc + 0x114954c);
  iVar8 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 8) = param_2;
  uVar3 = func_0x00f6b3c4(*puVar2);
  func_0x01ddde88(uVar3,iVar1,**(undefined4 **)(iRam011498e0 + 0x1149570),0);
  if (iVar8 == 0) {
    func_0x00f6b3d0();
  }
  iVar8 = func_0x02c03288(iVar8,uVar3,**(undefined4 **)(iRam011498e4 + 0x1149594));
  if (iVar8 == 0) {
    iVar7 = *(int *)(iVar1 + 8);
    if (iVar7 == 0) {
      func_0x00f6b3d0();
    }
    if (*(int *)(iVar7 + 0x84) == 0) {
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x00f6b3d0();
      }
      uStack_24 = *(undefined4 *)(iVar1 + 0x34);
      uVar3 = func_0x03054428(&uStack_24,0);
      uVar5 = func_0x010fdb74(&uStack_20,0,0,0);
      uVar3 = func_0x02ea998c(**(undefined4 **)(iRam01149900 + 0x114982c),uVar3,
                              **(undefined4 **)(iRam01149904 + 0x1149838),uVar5,0);
    }
    else {
      iVar7 = func_0x00f6b1ec(**(undefined4 **)(iRam011498e8 + 0x11495f0),10);
      if (iVar7 == 0) {
        func_0x00f6b3d0();
      }
      uVar3 = **(undefined4 **)(iRam011498ec + 0x1149610);
      if (*(int *)(iVar7 + 0xc) == 0) {
        func_0x00f6b3d4();
      }
      *(undefined4 *)(iVar7 + 0x10) = uVar3;
      iVar9 = *(int *)(iVar1 + 8);
      if (iVar9 == 0) {
        func_0x00f6b3d0();
      }
      uStack_24 = *(undefined4 *)(iVar9 + 0x34);
      uVar3 = func_0x03054428(&uStack_24,0);
      uVar4 = *(uint *)(iVar7 + 0xc);
      if (uVar4 < 2) {
        func_0x00f6b3d4();
        uVar4 = *(uint *)(iVar7 + 0xc);
      }
      *(undefined4 *)(iVar7 + 0x14) = uVar3;
      uVar3 = **(undefined4 **)(iRam011498f0 + 0x1149674);
      if (uVar4 < 3) {
        func_0x00f6b3d4();
      }
      *(undefined4 *)(iVar7 + 0x18) = uVar3;
      uVar3 = func_0x010fdb74(&uStack_20,0,0,0);
      uVar4 = *(uint *)(iVar7 + 0xc);
      if (uVar4 < 4) {
        func_0x00f6b3d4();
        uVar4 = *(uint *)(iVar7 + 0xc);
      }
      *(undefined4 *)(iVar7 + 0x1c) = uVar3;
      uVar3 = **(undefined4 **)(iRam011498f4 + 0x11496c0);
      if (uVar4 < 5) {
        func_0x00f6b3d4();
      }
      *(undefined4 *)(iVar7 + 0x20) = uVar3;
      iVar9 = *(int *)(iVar1 + 8);
      if (iVar9 == 0) {
        func_0x00f6b3d0();
      }
      uVar3 = func_0x011199d8(iVar9,0);
      uVar4 = *(uint *)(iVar7 + 0xc);
      if (uVar4 < 6) {
        func_0x00f6b3d4();
        uVar4 = *(uint *)(iVar7 + 0xc);
      }
      *(undefined4 *)(iVar7 + 0x24) = uVar3;
      uVar3 = **(undefined4 **)(iRam011498f8 + 0x1149714);
      if (uVar4 < 7) {
        func_0x00f6b3d4();
      }
      *(undefined4 *)(iVar7 + 0x28) = uVar3;
      iVar9 = *(int *)(iVar1 + 8);
      if (iVar9 == 0) {
        func_0x00f6b3d0();
      }
      iVar9 = *(int *)(iVar9 + 0x84);
      if (iVar9 == 0) {
        func_0x00f6b3d0();
      }
      uStack_24 = func_0x01119de8(iVar9,0);
      uVar3 = func_0x03054428(&uStack_24,0);
      uVar4 = *(uint *)(iVar7 + 0xc);
      if (uVar4 < 8) {
        func_0x00f6b3d4();
        uVar4 = *(uint *)(iVar7 + 0xc);
      }
      *(undefined4 *)(iVar7 + 0x2c) = uVar3;
      uVar3 = **(undefined4 **)(iRam011498fc + 0x1149788);
      if (uVar4 < 9) {
        func_0x00f6b3d4();
      }
      *(undefined4 *)(iVar7 + 0x30) = uVar3;
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x00f6b3d0();
      }
      iVar1 = *(int *)(iVar1 + 0x84);
      if (iVar1 == 0) {
        func_0x00f6b3d0();
      }
      uVar3 = *(undefined4 *)(iVar1 + 0x14);
      if (*(uint *)(iVar7 + 0xc) < 10) {
        func_0x00f6b3d4();
      }
      *(undefined4 *)(iVar7 + 0x34) = uVar3;
      uVar3 = func_0x02ea9a88(iVar7,0);
    }
    uVar5 = func_0x00f6b3c4(**(undefined4 **)(iRam01149908 + 0x1149854));
    func_0x0152e284(uVar5,uVar3,0);
    if (*(int *)(**(int **)(iRam0114990c + 0x1149874) + 0x74) == 0) {
      func_0x00f6b294();
    }
    func_0x0200818c(uVar5,0);
  }
  else {
    *(undefined4 *)(iVar8 + 0x28) = uStack_20;
    *(undefined4 *)(iVar8 + 0x2c) = uStack_1c;
    func_0x01149194(param_1,0);
  }
  return iVar8 != 0;
}

