/* Ghidra 12.1.2 native pseudocode; RVA 0x668F760; Merger.Game.Views.BoardUIView.GameStarted; status ok */


ulong Merger_Game_Views_BoardUIView__GameStarted(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 uVar11;
  float extraout_s0;
  float fVar12;
  undefined1 auVar13 [16];
  
  puVar1 = PTR_DAT_0774e4e0;
  if ((bRam0000000007e28291 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f318);
    func_0x03280a18(PTR_DAT_07772820);
    func_0x03280a18(PTR_DAT_078091a0);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_07809198);
    bRam0000000007e28291 = 1;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar6 = func_0x06fdeb74(uVar11,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar7 = func_0x06723d10(*(long *)(param_1 + 0x28),0);
      lVar8 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0776f318);
      func_0x0541e11c(lVar8,param_1,*(undefined8 *)PTR_DAT_078091a0,0);
      if (lVar7 != 0) {
        lVar9 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_07772820 + 0x20) + 0xc0) + 0x28);
        func_0x04d0dd80();
        if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04d0e0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)(lVar8 + 0x18))
                            (*(undefined8 *)(lVar8 + 0x40),*(undefined1 *)(lVar7 + 0x20),
                             *(undefined8 *)(lVar8 + 0x28));
          return uVar6;
        }
        auVar13 = func_0x03280cac();
        lVar7 = *(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x30);
        puVar10 = (ulong *)(auVar13._0_8_ + 0x10);
        uVar6 = *puVar10;
        do {
          lVar8 = func_0x057ddd18(uVar6,auVar13._8_8_,0);
          lVar9 = *(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = func_0x0325681c(lVar9);
          }
          if (lVar8 == 0) {
            lVar3 = 0;
          }
          else {
            lVar3 = func_0x03280b90(lVar8,lVar9);
            if (lVar3 == 0) {
              auVar13 = func_0x03281048(lVar8,lVar9);
              if ((bRam0000000007e1aec2 & 1) == 0) {
                func_0x03280a18(PTR_DAT_0774e758);
                bRam0000000007e1aec2 = 1;
              }
              puVar1 = PTR_DAT_0774e758;
              puVar10 = (ulong *)(auVar13._0_8_ + 0x18);
              uVar6 = *puVar10;
              while ((plVar4 = (long *)func_0x057ddb20(uVar6,auVar13._8_8_,0), plVar4 == (long *)0x0
                     || (*plVar4 == *(long *)puVar1))) {
                uVar5 = func_0x032dd140(puVar10,plVar4,uVar6);
                bVar2 = uVar6 == uVar5;
                uVar6 = uVar5;
                if (bVar2) {
                  return uVar5;
                }
              }
              auVar13 = func_0x03281048(plVar4);
              if ((bRam0000000007e1aec3 & 1) == 0) {
                func_0x03280a18(PTR_DAT_0774e758);
                bRam0000000007e1aec3 = 1;
              }
              puVar1 = PTR_DAT_0774e758;
              puVar10 = (ulong *)(auVar13._0_8_ + 0x18);
              uVar6 = *puVar10;
              while ((plVar4 = (long *)func_0x057ddd18(uVar6,auVar13._8_8_,0), plVar4 == (long *)0x0
                     || (*plVar4 == *(long *)puVar1))) {
                uVar5 = func_0x032dd140(puVar10,plVar4,uVar6);
                bVar2 = uVar6 == uVar5;
                uVar6 = uVar5;
                if (bVar2) {
                  return uVar5;
                }
              }
              lVar7 = func_0x03281048(plVar4);
              return (ulong)*(byte *)(lVar7 + 0x20);
            }
          }
          uVar5 = func_0x032dd140(puVar10,lVar3,uVar6);
          bVar2 = uVar6 != uVar5;
          uVar6 = uVar5;
        } while (bVar2);
        return uVar5;
      }
    }
    lVar7 = func_0x03280cac();
    puVar1 = PTR_DAT_07809190;
    if ((bRam0000000007e28292 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07809190);
      bRam0000000007e28292 = 1;
    }
    uVar6 = func_0x05369b3c(lVar7,*(undefined8 *)puVar1);
    if ((uVar6 & 1) != 0) {
      fVar12 = *(float *)(lVar7 + 0x74);
      uVar6 = func_0x06fd6310(0);
      fVar12 = fVar12 + extraout_s0;
      *(float *)(lVar7 + 0x74) = fVar12;
      if (*(float *)(lVar7 + 0x70) <= fVar12) {
        uVar6 = Merger_Game_Views_BoardUIView__CheckShowMetaButtonTutorial(lVar7);
        *(undefined4 *)(lVar7 + 0x74) = 0;
      }
    }
    return uVar6;
  }
  return uVar6;
}

