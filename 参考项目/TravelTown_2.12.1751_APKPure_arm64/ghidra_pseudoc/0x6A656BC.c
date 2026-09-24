/* Ghidra 12.1.2 native pseudocode; RVA 0x6A656BC; Merger.MergeBoard.Systems.CollectItemSystem.Tick; status ok */


void Merger_MergeBoard_Systems_CollectItemSystem__Tick(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  long lStack_180;
  long lStack_178;
  char cStack_16f;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_138 [56];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  
  puVar5 = PTR_DAT_07830a68;
  puVar4 = PTR_DAT_07830a60;
  puVar3 = PTR_DAT_07830a58;
  puVar2 = PTR_DAT_0782fe68;
  puVar1 = PTR_DAT_0782fe48;
  if ((bRam0000000007e2a69e & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07830a58);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07830a70);
    func_0x03280a18(PTR_DAT_07830a78);
    func_0x03280a18(PTR_DAT_07830a68);
    func_0x03280a18(PTR_DAT_07830a60);
    func_0x03280a18(PTR_DAT_07830a80);
    func_0x03280a18(PTR_DAT_07830a88);
    func_0x03280a18(PTR_DAT_07830a90);
    bRam0000000007e2a69e = 1;
  }
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x072ce9a0(&uStack_190,0,0x90);
  uStack_1a8 = param_2[1];
  uStack_1b0 = *param_2;
  uStack_198 = param_2[3];
  uStack_1a0 = param_2[2];
  uVar7 = func_0x03d1ab40(*(undefined8 *)puVar3);
  uVar8 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x06015d08(uVar8,0,*(undefined8 *)puVar1,0);
  uStack_d8 = uStack_1a8;
  uStack_e0 = uStack_1b0;
  uStack_c8 = uStack_198;
  uStack_d0 = uStack_1a0;
  func_0x03e66404(&uStack_100,&uStack_e0,uVar7,uVar8,*(undefined8 *)puVar4);
  uVar9 = func_0x04496340(&uStack_100,&uStack_190,*(undefined8 *)puVar5);
  if (((uVar9 & 1) != 0) && (cStack_16f == '\0')) {
    cStack_16f = 1;
    func_0x06b9c2a4(auStack_138,0);
    uVar7 = *(undefined8 *)PTR_DAT_07830a90;
    func_0x072ce970(&uStack_e0,&uStack_190,0x90);
    func_0x03ec6de4(&uStack_e0,uVar7);
    uStack_1c8 = param_2[1];
    uStack_1d0 = *param_2;
    uStack_1b8 = param_2[3];
    uStack_1c0 = param_2[2];
    func_0x06b98f6c(&uStack_1d0,uStack_190,0);
    if (lStack_178 != 0) {
      lVar11 = param_2[2];
      lVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830a78);
      func_0x06b9a944(lVar10,0);
      if (lVar10 == 0) goto SUB_057da5fc;
      *(undefined8 *)(lVar10 + 0x10) = uStack_190;
      func_0x032809c4();
      *(undefined8 *)(lVar10 + 0x20) = uStack_168;
      func_0x032809c4();
      *(undefined8 *)(lVar10 + 0x18) = uStack_160;
      func_0x032809c4((undefined8 *)(lVar10 + 0x18));
      *(undefined4 *)(lVar10 + 0x28) = uStack_188;
      if ((lStack_178 == 0) ||
         (*(undefined8 *)(lVar10 + 0x2c) = *(undefined8 *)(lStack_178 + 0x10), lVar11 == 0))
      goto SUB_057da5fc;
      func_0x03ec33e4(lVar11,lVar10,*(undefined8 *)PTR_DAT_07830a88);
    }
    if (lStack_180 != 0) {
      lVar11 = param_2[2];
      lVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830a70);
      func_0x06b9a764(lVar10,0);
      if (lVar10 != 0) {
        *(undefined8 *)(lVar10 + 0x10) = uStack_190;
        func_0x032809c4();
        *(undefined8 *)(lVar10 + 0x20) = uStack_168;
        func_0x032809c4();
        *(undefined8 *)(lVar10 + 0x18) = uStack_160;
        func_0x032809c4((undefined8 *)(lVar10 + 0x18));
        *(undefined4 *)(lVar10 + 0x28) = uStack_188;
        if (lStack_180 != 0) {
          *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)(lStack_180 + 0x18);
          func_0x032809c4((undefined8 *)(lVar10 + 0x30));
          bVar6 = func_0x06b9bd10(&lStack_180,0);
          *(byte *)(lVar10 + 0x38) = bVar6 & 1;
          if (lVar11 != 0) {
            func_0x03ec33e4(lVar11,lVar10,*(undefined8 *)PTR_DAT_07830a80);
            return;
          }
        }
      }
SUB_057da5fc:
      func_0x03280cac();
      return;
    }
  }
  return;
}

