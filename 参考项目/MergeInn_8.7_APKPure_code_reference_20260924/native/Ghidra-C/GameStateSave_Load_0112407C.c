// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameStateSave.Load 0x112407C; public void Load() {
// Image base: 0x10000; Ghidra address: 0113407c; native size hint: 0x98


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameStateSave_Load_0112407C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar3 = (char *)(_UNK_01134314 + 0x1134094);
  if (*pcVar3 == '\0') {
    func_0x00f6b160(*(undefined4 *)(_UNK_01134318 + 0x11340a8));
    func_0x00f6b160(*(undefined4 *)(_UNK_0113431c + 0x11340b4));
    func_0x00f6b160(*(undefined4 *)(_UNK_01134320 + 0x11340c0));
    func_0x00f6b160(*(undefined4 *)(_UNK_01134324 + 0x11340cc));
    func_0x00f6b160(*(undefined4 *)(_UNK_01134328 + 0x11340d8));
    func_0x00f6b160(*(undefined4 *)(_UNK_0113432c + 0x11340e4));
    func_0x00f6b160(*(undefined4 *)(_UNK_01134330 + 0x11340f0));
    func_0x00f6b160(*(undefined4 *)(_UNK_01134334 + 0x11340fc));
    func_0x00f6b160(*(undefined4 *)(_UNK_01134338 + 0x1134108));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x10);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (iVar4 == 0) {
    func_0x00f6b3d0();
  }
  func_0x0114a9f4(iVar4);
  uVar1 = func_0x01148fc8(param_1);
  if (*(int *)(**(int **)(_UNK_0113433c + 0x113414c) + 0x74) == 0) {
    func_0x00f6b294();
  }
  iVar4 = func_0x019394ac(uVar1,1,0,**(undefined4 **)(_UNK_01134340 + 0x1134170));
  if (iVar4 != 0) {
    iVar6 = *(int *)(iVar4 + 0xc);
    if (iVar6 == 0) {
      func_0x00f6b3d0();
    }
    func_0x02c0384c(&uStack_38,iVar6,**(undefined4 **)(_UNK_01134344 + 0x11341a4));
    uStack_40 = 0;
    puVar5 = *(undefined4 **)(_UNK_01134348 + 0x11341cc);
    puVar7 = *(undefined4 **)(_UNK_0113434c + 0x11341d4);
    puStack_3c = &uStack_38;
    while (iVar2 = func_0x02735d78(&uStack_38,*puVar5), iVar6 = iStack_2c, iVar2 != 0) {
      if (iStack_2c == 0) {
        func_0x00f6b3d0();
      }
      iVar2 = func_0x02ea8410(*(undefined4 *)(iVar6 + 0x24),0);
      if (iVar2 != 0) {
        uStack_44 = *(undefined4 *)(iVar6 + 0x20);
        uStack_4c = *puVar7;
        uStack_48 = 0xffffffff;
        uVar1 = func_0x030978f8(&uStack_4c,0);
        *(undefined4 *)(iVar6 + 0x24) = uVar1;
      }
    }
    func_0x02735d74(&uStack_38,**(undefined4 **)(_UNK_01134350 + 0x1134238));
    iVar6 = *(int *)(param_1 + 0xc);
    if (iVar6 == 0) {
      func_0x00f6b3d0();
    }
    iVar2 = *(int *)(iVar6 + 0xc);
    *(undefined4 *)(iVar6 + 0xc) = 0;
    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    if (0 < iVar2) {
      func_0x03080838(*(undefined4 *)(iVar6 + 8),0,iVar2,0);
    }
    iVar6 = *(int *)(param_1 + 0xc);
    uVar1 = *(undefined4 *)(iVar4 + 0xc);
    if (iVar6 == 0) {
      func_0x00f6b3d0();
    }
    func_0x02c02dbc(iVar6,uVar1,**(undefined4 **)(_UNK_01134358 + 0x113429c));
    func_0x0114acd0(param_1,*(undefined4 *)(param_1 + 0xc));
  }
  return;
}

