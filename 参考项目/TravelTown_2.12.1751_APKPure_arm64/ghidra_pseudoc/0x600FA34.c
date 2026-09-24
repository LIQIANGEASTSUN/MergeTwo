/* Ghidra 12.1.2 native pseudocode; RVA 0x600FA34; MergeEngine.Configuration.Capabilities.ChargableCapability.GetStateSpriteAssets; status ok */


long MergeEngine_Configuration_Capabilities_ChargableCapability__GetStateSpriteAssets(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_64;
  
  if ((bRam0000000007e237d3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_0774e6b0);
    func_0x03280a18(PTR_DAT_077c4508);
    func_0x03280a18(PTR_DAT_077cf418);
    func_0x03280a18(PTR_DAT_077798f0);
    func_0x03280a18(PTR_DAT_077cf420);
    func_0x03280a18(PTR_DAT_077cf428);
    func_0x03280a18(PTR_DAT_077cf430);
    func_0x03280a18(PTR_DAT_077cf438);
    func_0x03280a18(PTR_DAT_0774f768);
    bRam0000000007e237d3 = 1;
  }
  plVar11 = (long *)(param_1 + 0x20);
  lVar5 = *plVar11;
  if (lVar5 == 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      lVar5 = 0;
    }
    else {
      uVar6 = func_0x03280afc(*(undefined8 *)PTR_DAT_077cf418,
                              *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18));
      *(undefined8 *)(param_1 + 0x20) = uVar6;
      func_0x032809c4(plVar11,uVar6);
      puVar4 = PTR_DAT_077cf438;
      puVar3 = PTR_DAT_077cf428;
      puVar2 = PTR_DAT_077c4508;
      puVar1 = PTR_DAT_0776dcd8;
      lVar5 = *(long *)(param_1 + 0x18);
      if (lVar5 != 0) {
        uVar13 = 0;
        lVar14 = 0x20;
        do {
          if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar13) goto LAB_0610fce0;
          if (*(uint *)(lVar5 + 0x18) <= uVar13) {
LAB_0610fd0c:
            func_0x03280cb4();
SUB_057da5fc:
            uVar6 = func_0x03280cd0();
            lVar5 = func_0x03280b7c(uVar6,0);
            return lVar5;
          }
          uVar6 = *(undefined8 *)(lVar5 + uVar13 * 8 + 0x20);
          uVar7 = func_0x055f7aac(uVar6,0);
          if ((uVar7 & 1) == 0) {
            lVar5 = *(long *)puVar2;
            plVar12 = (long *)*plVar11;
            if (*(int *)(lVar5 + 0xe0) == 0) {
              func_0x03280b8c();
              lVar5 = *(long *)puVar2;
            }
            plVar9 = (long *)**(long **)(lVar5 + 0xb8);
            if (plVar9 == (long *)0x0) break;
            uVar8 = (**(code **)(*plVar9 + 0x2a8))(plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
            lVar5 = func_0x0599abb0(uVar6,uVar8,0);
            if (plVar12 == (long *)0x0) break;
            if ((lVar5 != 0) &&
               (lVar10 = func_0x03280b90(lVar5,*(undefined8 *)(*plVar12 + 0x40)), lVar10 == 0))
            goto SUB_057da5fc;
            if (*(uint *)(plVar12 + 3) <= uVar13) goto LAB_0610fd0c;
            *(long *)((long)plVar12 + lVar14) = lVar5;
            func_0x032809c4((long *)((long)plVar12 + lVar14),lVar5);
          }
          else {
            uStack_64 = (undefined4)uVar13;
            uVar6 = func_0x03280b94(*(undefined8 *)PTR_DAT_0774e6b0,&uStack_64);
            uVar6 = func_0x055ee6c0(*(undefined8 *)PTR_DAT_077cf420,uVar6,0);
            uVar8 = func_0x055f8748(*(undefined8 *)PTR_DAT_0774f768,*(undefined8 *)(param_1 + 0x18),
                                    0);
            uVar6 = func_0x055f7538(uVar6,*(undefined8 *)PTR_DAT_077cf430,uVar8,0);
            uStack_80 = *(undefined8 *)PTR_DAT_077798f0;
            uStack_70 = 0x45;
            uStack_78 = 0xffffffffffffffff;
            uVar8 = func_0x057cd6e4(&uStack_80,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              func_0x03280b8c(*(long *)puVar1);
            }
            func_0x0556c434(uVar6,uVar8,0,*(undefined8 *)puVar4,*(undefined8 *)puVar3,0,0);
          }
          lVar5 = *(long *)(param_1 + 0x18);
          uVar13 = uVar13 + 1;
          lVar14 = lVar14 + 8;
        } while (lVar5 != 0);
      }
      func_0x03280cac();
LAB_0610fce0:
      lVar5 = *plVar11;
    }
  }
  return lVar5;
}

