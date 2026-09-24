/* Ghidra 12.1.2 native pseudocode; RVA 0x613162C; MergeEngine.Model.RemoteSpawning.RemoteSpawningModel.TryPeekNextItem; status ok */

ulong MergeEngine_Model_RemoteSpawning_RemoteSpawningModel__TryPeekNextItem
                (long param_1,long *param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long extraout_x1;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [12];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_38;
  
  if ((bRam0000000007e2450d & 1) == 0) {
    func_0x03280a18(PTR_DAT_077da900);
    func_0x03280a18(PTR_DAT_077da908);
    func_0x03280a18(PTR_DAT_077da930);
    func_0x03280a18(PTR_DAT_077da938);
    func_0x03280a18(PTR_DAT_077da940);
    func_0x03280a18(PTR_DAT_077da8e8);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_077da948);
    func_0x03280a18(PTR_DAT_0774e5d8);
    bRam0000000007e2450d = 1;
  }
  puVar1 = PTR_DAT_07779820;
  lStack_38 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if (param_2 != (long *)0x0) {
    lVar6 = *param_2;
    plVar9 = *(long **)(param_1 + 0x40);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07779820) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06231734;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779820,0);
LAB_06231734:
    uVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_077da8e8) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_062317a0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_077da8e8,3);
LAB_062317a0:
      uVar7 = (*(code *)*puVar3)(plVar9,uVar4,puVar3[1]);
      uVar5 = func_0x055f7aac(uVar7,0);
      if ((uVar5 & 1) == 0) {
        return uVar7;
      }
      lVar6 = *param_2;
      lVar10 = *(long *)(param_1 + 0x48);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06231810;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar1,0);
LAB_06231810:
      uVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
      if (lVar10 != 0) {
        uVar7 = func_0x04fe48b0(lVar10,uVar4,&lStack_38,*(undefined8 *)PTR_DAT_077da908);
        if ((uVar7 & 1) == 0) goto LAB_06231918;
        if (lStack_38 != 0) {
          uVar7 = func_0x04f37608(lStack_38,param_3,&lStack_48,*(undefined8 *)PTR_DAT_077da900);
          if (((lStack_48 != 0) && ((uVar7 & 1) != 0)) && (*(long *)(lStack_48 + 0x18) != 0)) {
            func_0x044a3220(&uStack_60,*(long *)(lStack_48 + 0x18),*(undefined8 *)PTR_DAT_077da948);
            puVar2 = PTR_DAT_077da940;
            puVar1 = PTR_DAT_077da938;
            while (uVar7 = func_0x05115dc0(&uStack_60,*(undefined8 *)puVar1), (uVar7 & 1) != 0) {
              lVar6 = func_0x05115eb0(&uStack_60,*(undefined8 *)puVar2);
              if (lVar6 == 0) goto LAB_0623194c;
              lVar11 = *(long *)(lVar6 + 0x18);
              lVar10 = func_0x0622fba4(param_1);
              if (lVar10 <= lVar11) {
                uVar7 = *(ulong *)(lVar6 + 0x10);
                if (uVar7 == 0) {
                  uVar7 = **(ulong **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
                }
                func_0x05115db0(&uStack_60,*(undefined8 *)PTR_DAT_077da930);
                return uVar7;
              }
            }
            func_0x05115db0(&uStack_60,*(undefined8 *)PTR_DAT_077da930);
          }
          goto LAB_06231918;
        }
      }
    }
  }
  func_0x03280cac();
LAB_0623194c:
  auVar12 = func_0x03280cac();
  if (auVar12._8_4_ == 1) {
    plVar9 = (long *)func_0x072ce910(auVar12._0_8_);
    lVar6 = *plVar9;
    func_0x072ce920();
    func_0x05115db0(&uStack_60,*(undefined8 *)PTR_DAT_077da930);
    if (lVar6 == 0) {
LAB_06231918:
      return **(ulong **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
    }
    func_0x03280ca4(lVar6);
  }
  func_0x05115db0(&uStack_60,*(undefined8 *)PTR_DAT_077da930);
  func_0x03365958(auVar12._0_8_);
  func_0x03280ca4(0);
  func_0x02f09514();
  lVar6 = func_0x0622fba4();
  return (ulong)(extraout_x1 < lVar6);
}

