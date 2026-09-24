/* Ghidra 12.1.2 native pseudocode; RVA 0x5FE8DBC; MergeEngine.Util.ItemSpawningQueue.AddFixedItems; status ok */

/* WARNING: Possible PIC construction at 0x060e96dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x060e96e0) */
/* WARNING: Removing unreachable block (ram,0x060e96e4) */
/* WARNING: Removing unreachable block (ram,0x060e9710) */
/* WARNING: Removing unreachable block (ram,0x060e9718) */
/* WARNING: Removing unreachable block (ram,0x060e9720) */
/* WARNING: Removing unreachable block (ram,0x060e972c) */
/* WARNING: Removing unreachable block (ram,0x060e975c) */
/* WARNING: Removing unreachable block (ram,0x060e9780) */
/* WARNING: Removing unreachable block (ram,0x060e97b8) */
/* WARNING: Removing unreachable block (ram,0x060e97e8) */
/* WARNING: Removing unreachable block (ram,0x060e97f4) */
/* WARNING: Removing unreachable block (ram,0x060e9800) */
/* WARNING: Removing unreachable block (ram,0x060e9808) */
/* WARNING: Removing unreachable block (ram,0x060e9814) */
/* WARNING: Removing unreachable block (ram,0x060e985c) */
/* WARNING: Removing unreachable block (ram,0x060e9860) */
/* WARNING: Removing unreachable block (ram,0x060e9884) */
/* WARNING: Removing unreachable block (ram,0x060e9890) */
/* WARNING: Removing unreachable block (ram,0x060e989c) */
/* WARNING: Removing unreachable block (ram,0x060e98a4) */
/* WARNING: Removing unreachable block (ram,0x060e98b0) */
/* WARNING: Removing unreachable block (ram,0x060e98fc) */
/* WARNING: Removing unreachable block (ram,0x060e9904) */
/* WARNING: Removing unreachable block (ram,0x060e9910) */
/* WARNING: Removing unreachable block (ram,0x060e991c) */
/* WARNING: Removing unreachable block (ram,0x060e9924) */
/* WARNING: Removing unreachable block (ram,0x060e9930) */
/* WARNING: Removing unreachable block (ram,0x060e9980) */
/* WARNING: Removing unreachable block (ram,0x060e99a0) */
/* WARNING: Removing unreachable block (ram,0x060e99a8) */
/* WARNING: Removing unreachable block (ram,0x060e99bc) */
/* WARNING: Removing unreachable block (ram,0x060e9ab0) */
/* WARNING: Removing unreachable block (ram,0x060e9ab4) */
/* WARNING: Removing unreachable block (ram,0x060e9ab8) */
/* WARNING: Removing unreachable block (ram,0x060e99cc) */
/* WARNING: Removing unreachable block (ram,0x060e99d8) */
/* WARNING: Removing unreachable block (ram,0x060e9abc) */
/* WARNING: Removing unreachable block (ram,0x060e99dc) */
/* WARNING: Removing unreachable block (ram,0x060e99f8) */
/* WARNING: Removing unreachable block (ram,0x060e9a0c) */
/* WARNING: Removing unreachable block (ram,0x060e9a1c) */
/* WARNING: Removing unreachable block (ram,0x060e9ac0) */
/* WARNING: Removing unreachable block (ram,0x060e9ac4) */
/* WARNING: Removing unreachable block (ram,0x060e9ac8) */
/* WARNING: Removing unreachable block (ram,0x060e9acc) */
/* WARNING: Removing unreachable block (ram,0x060e9ad0) */
/* WARNING: Removing unreachable block (ram,0x060e9ad4) */
/* WARNING: Removing unreachable block (ram,0x060e9ad8) */
/* WARNING: Removing unreachable block (ram,0x060e9adc) */
/* WARNING: Removing unreachable block (ram,0x060e9ae0) */
/* WARNING: Removing unreachable block (ram,0x060e9ae4) */
/* WARNING: Removing unreachable block (ram,0x060e9a34) */
/* WARNING: Removing unreachable block (ram,0x060e9a64) */
/* WARNING: Removing unreachable block (ram,0x060e9a44) */

void MergeEngine_Util_ItemSpawningQueue__AddFixedItems
               (undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long extraout_x1;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar2 = PTR_DAT_077cd8b0;
  lVar7 = param_3;
  if ((bRam0000000007e23628 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cd8b0);
    func_0x03280a18(PTR_DAT_077cd8b8);
    func_0x03280a18(PTR_DAT_077cd8c0);
    func_0x03280a18(PTR_DAT_077cd8c8);
    func_0x03280a18(PTR_DAT_077cd8d0);
    func_0x03280a18(PTR_DAT_077cd8d8);
    bRam0000000007e23628 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  uVar5 = func_0x03ce830c(param_3,*(undefined8 *)puVar2);
  iVar8 = (int)param_4;
  if ((uVar5 & 1) == 0) {
    if (param_3 == 0) {
LAB_060e8f5c:
      auVar16 = func_0x03280cac();
      if (auVar16._8_4_ == 1) {
        plVar6 = (long *)func_0x072ce910(auVar16._0_8_);
        lVar11 = *plVar6;
        func_0x072ce920();
        func_0x051159b0(&uStack_50,*(undefined8 *)PTR_DAT_077cd8b8);
        if (lVar11 == 0) {
          return;
        }
        func_0x03280ca4(lVar11);
      }
      func_0x051159b0(&uStack_50,*(undefined8 *)PTR_DAT_077cd8b8);
      func_0x03365958(auVar16._0_8_);
      func_0x03280ca4(0);
      auVar17 = func_0x02f09514();
      puVar2 = PTR_DAT_077cd8e0;
      lVar11 = auVar17._8_8_;
      if ((bRam0000000007e2362a & 1) == 0) {
        func_0x03280a18(PTR_DAT_077cd8e0);
        func_0x03280a18(PTR_DAT_077cd8e8);
        func_0x03280a18(PTR_DAT_077cd8f0);
        func_0x03280a18(PTR_DAT_077cd8f8);
        func_0x03280a18(PTR_DAT_077cd8d0);
        func_0x03280a18(PTR_DAT_077cd900);
        func_0x03280a18(PTR_DAT_077cd908);
        func_0x03280a18(PTR_DAT_077cd910);
        func_0x03280a18(PTR_DAT_077cd918);
        func_0x03280a18(PTR_DAT_077cd920);
        func_0x03280a18(PTR_DAT_077cd928);
        func_0x03280a18(PTR_DAT_077cd930);
        func_0x03280a18(PTR_DAT_077cd938);
        bRam0000000007e2362a = 1;
      }
      uVar5 = func_0x03ce830c(lVar7,*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_077cd928;
      if ((uVar5 & 1) != 0) {
        return;
      }
      lVar9 = *(long *)PTR_DAT_077cd928;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar9 = *(long *)puVar2;
      }
      lVar10 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x40);
      if (lVar10 == 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar9 = *(long *)puVar2;
        }
        uVar13 = **(undefined8 **)(lVar9 + 0xb8);
        lVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd8e8);
        func_0x04e5231c(lVar10,uVar13,*(undefined8 *)PTR_DAT_077cd910,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
        *plVar6 = lVar10;
        func_0x032809c4(plVar6,lVar10);
      }
      if (lVar7 != 0) {
        func_0x04146094(lVar7,lVar10,*(undefined8 *)PTR_DAT_077cd900);
        lVar9 = *(long *)puVar2;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar9 = *(long *)puVar2;
        }
        lVar10 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x48);
        if (lVar10 == 0) {
          if (*(int *)(lVar9 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar9 = *(long *)puVar2;
          }
          uVar13 = **(undefined8 **)(lVar9 + 0xb8);
          lVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd8f8);
          func_0x05356664(lVar10,uVar13,*(undefined8 *)PTR_DAT_077cd918,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
          *plVar6 = lVar10;
          func_0x032809c4(plVar6,lVar10);
          lVar9 = *(long *)puVar2;
        }
        if (*(int *)(lVar9 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar9 = *(long *)puVar2;
        }
        lVar14 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x50);
        if (lVar14 == 0) {
          if (*(int *)(lVar9 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar9 = *(long *)puVar2;
          }
          uVar13 = **(undefined8 **)(lVar9 + 0xb8);
          lVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd8f0);
          func_0x053569b8(lVar14,uVar13,*(undefined8 *)PTR_DAT_077cd920,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
          *plVar6 = lVar14;
          func_0x032809c4(plVar6,lVar14);
        }
        lVar7 = func_0x03f36a2c(lVar7,lVar10,lVar14,*(undefined8 *)PTR_DAT_077cd938);
        puVar3 = PTR_DAT_077cd930;
        puVar2 = PTR_DAT_077cd8d0;
        if (lVar11 != 0) {
          iVar12 = *(int *)(lVar11 + 0x18);
          while( true ) {
            if (iVar8 <= iVar12) {
              return;
            }
            if (lVar7 == 0) break;
            uVar13 = func_0x04a44e1c(lVar7,*(undefined8 *)(auVar17._0_8_ + 0x20),
                                     *(undefined8 *)puVar3);
            lVar9 = *(long *)(lVar11 + 0x10);
            lVar10 = *(long *)puVar2;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar9 == 0) break;
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
              func_0x032809c4();
            }
            else {
              func_0x0414446c(lVar11,uVar13,
                              *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            iVar12 = *(int *)(lVar11 + 0x18);
          }
        }
      }
      func_0x03280cac();
      puVar2 = PTR_DAT_077cd928;
      if ((bRam0000000007e23626 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077cd8e0);
        func_0x03280a18(PTR_DAT_077cd8e8);
        func_0x03280a18(PTR_DAT_077cd940);
        func_0x03280a18(PTR_DAT_077cd948);
        func_0x03280a18(PTR_DAT_077cd950);
        func_0x03280a18(PTR_DAT_077cd958);
        func_0x03280a18(PTR_DAT_077cd960);
        func_0x03280a18(PTR_DAT_077cd968);
        func_0x03280a18(PTR_DAT_077cd970);
        func_0x03280a18(PTR_DAT_077cd978);
        func_0x03280a18(PTR_DAT_077cd980);
        func_0x03280a18(PTR_DAT_077cd8f0);
        func_0x03280a18(PTR_DAT_077cd988);
        func_0x03280a18(PTR_DAT_077cd8f8);
        func_0x03280a18(PTR_DAT_077cd990);
        func_0x03280a18(PTR_DAT_077cd8d0);
        func_0x03280a18(PTR_DAT_077cd998);
        func_0x03280a18(PTR_DAT_077cd9a0);
        func_0x03280a18(PTR_DAT_077cd900);
        func_0x03280a18(PTR_DAT_077cd850);
        func_0x03280a18(PTR_DAT_077cd908);
        func_0x03280a18(PTR_DAT_077cd848);
        func_0x03280a18(PTR_DAT_077cd9a8);
        func_0x03280a18(PTR_DAT_077cd9b0);
        func_0x03280a18(PTR_DAT_077cd9b8);
        func_0x03280a18(PTR_DAT_077cd9c0);
        func_0x03280a18(PTR_DAT_077cd9c8);
        func_0x03280a18(PTR_DAT_077cd9d0);
        func_0x03280a18(PTR_DAT_077cd9d8);
        func_0x03280a18(PTR_DAT_077cd9e0);
        func_0x03280a18(PTR_DAT_077cd928);
        func_0x03280a18(PTR_DAT_077cd930);
        func_0x03280a18(PTR_DAT_077cd938);
        bRam0000000007e23626 = 1;
      }
      lVar7 = *(long *)puVar2;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar7 = *(long *)puVar2;
      }
      puVar4 = PTR_DAT_077cd958;
      puVar3 = PTR_DAT_077cd950;
      lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar11 == 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar7 = *(long *)puVar2;
        }
        uVar13 = **(undefined8 **)(lVar7 + 0xb8);
        lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd988);
        func_0x053569b8(lVar11,uVar13,*(undefined8 *)PTR_DAT_077cd9b0,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        *plVar6 = lVar11;
        func_0x032809c4(plVar6,lVar11);
      }
      uVar13 = func_0x03d53498(extraout_x1,lVar11,*(undefined8 *)puVar4);
      uVar13 = func_0x03d3c654(uVar13,*(undefined8 *)puVar3);
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        func_0x03280b8c(lVar7);
        lVar7 = *(long *)puVar2;
      }
      puVar3 = PTR_DAT_077cd968;
      puVar2 = PTR_DAT_077cd960;
      lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar11 == 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          func_0x03280b8c(lVar7);
          lVar7 = *(long *)PTR_DAT_077cd928;
        }
        puVar4 = PTR_DAT_077cd928;
        uVar15 = **(undefined8 **)(lVar7 + 0xb8);
        lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd990);
        func_0x053569b8(lVar11,uVar15,*(undefined8 *)PTR_DAT_077cd9b8,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        *plVar6 = lVar11;
        func_0x032809c4(plVar6,lVar11);
      }
      uVar13 = func_0x03d50a94(uVar13,lVar11,*(undefined8 *)puVar2);
      func_0x03d5ffd0(uVar13,*(undefined8 *)puVar3);
      if (extraout_x1 == 0) {
        auVar16 = func_0x03280cac();
        if (auVar16._8_4_ == 1) {
          plVar6 = (long *)func_0x072ce910(auVar16._0_8_);
          lVar7 = *plVar6;
          func_0x072ce920();
          func_0x051159b0(&uStack_140,*(undefined8 *)PTR_DAT_077cd970);
          if (lVar7 == 0) {
            return;
          }
          func_0x03280ca4(lVar7);
        }
        func_0x051159b0(&uStack_140,*(undefined8 *)PTR_DAT_077cd970);
        func_0x03365958(auVar16._0_8_);
        func_0x03280ca4(0);
        func_0x02f09514();
      }
      else {
        func_0x04145068(&uStack_158,extraout_x1,*(undefined8 *)PTR_DAT_077cd9a0);
        uStack_138 = uStack_150;
        uStack_140 = uStack_158;
        uStack_130 = uStack_148;
        uVar5 = func_0x051159b4(&uStack_140,*(undefined8 *)PTR_DAT_077cd978);
        if ((uVar5 & 1) == 0) {
          func_0x051159b0(&uStack_140,*(undefined8 *)PTR_DAT_077cd970);
          return;
        }
        func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd9e0);
      }
      return;
    }
    func_0x04145068(&uStack_68,param_3,*(undefined8 *)PTR_DAT_077cd8d8);
    puVar3 = PTR_DAT_077cd8d0;
    puVar2 = PTR_DAT_077cd8c0;
    uStack_48 = uStack_60;
    uStack_50 = uStack_68;
    lStack_40 = lStack_58;
    while( true ) {
      uVar5 = func_0x051159b4(&uStack_50,*(undefined8 *)puVar2);
      lVar11 = lStack_40;
      iVar8 = (int)param_4;
      if ((uVar5 & 1) == 0) break;
      if (lStack_40 == 0) {
LAB_060e8f58:
        func_0x03280cac();
        goto LAB_060e8f5c;
      }
      if (0 < *(int *)(lStack_40 + 0x24)) {
        iVar12 = 0;
        do {
          iVar8 = (int)param_4;
          if (param_2 == 0) {
            func_0x03280cac();
LAB_060e8f54:
            func_0x03280cac();
            goto LAB_060e8f58;
          }
          lVar9 = *(long *)(param_2 + 0x10);
          lVar10 = *(long *)puVar3;
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_060e8f54;
          uVar1 = *(uint *)(param_2 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(param_2 + 0x18) = uVar1 + 1;
            plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
            *plVar6 = lVar11;
            func_0x032809c4(plVar6,lVar11);
          }
          else {
            lVar7 = *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(param_2,lVar11);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < *(int *)(lVar11 + 0x24));
      }
    }
    func_0x051159b0(&uStack_50,*(undefined8 *)PTR_DAT_077cd8b8);
  }
  return;
}

