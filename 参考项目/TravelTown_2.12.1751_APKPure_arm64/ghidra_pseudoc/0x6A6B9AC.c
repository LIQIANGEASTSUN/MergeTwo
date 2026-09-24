/* Ghidra 12.1.2 native pseudocode; RVA 0x6A6B9AC; Merger.MergeBoard.Systems.InteractionSystem.IsInteractionAvailable; status ok */


/* WARNING: Possible PIC construction at 0x06b6bb04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b6bb08) */
/* WARNING: Removing unreachable block (ram,0x06b6bb0c) */
/* WARNING: Removing unreachable block (ram,0x06b6bbb8) */
/* WARNING: Removing unreachable block (ram,0x06b6bb88) */

undefined8
Merger_MergeBoard_Systems_InteractionSystem__IsInteractionAvailable
          (undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam0000000007e2a6c7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830fa8);
    func_0x03280a18(PTR_DAT_07830fb0);
    func_0x03280a18(PTR_DAT_07830fb8);
    bRam0000000007e2a6c7 = 1;
  }
  uVar2 = func_0x06b868e4(param_3,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if (param_3 != 0) {
    uVar2 = func_0x03d1b840(param_3,*(undefined8 *)PTR_DAT_07830fb0);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    lVar4 = *(long *)(param_2 + 0x10);
    uVar3 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830fa8);
    func_0x06b9a2cc(uVar3,param_3,0);
    if (lVar4 != 0) {
      func_0x03ec33e4(lVar4,uVar3,*(undefined8 *)PTR_DAT_07830fb8);
      return 0;
    }
  }
  func_0x03280cac();
  puVar1 = PTR_DAT_07830fc0;
  if ((bRam0000000007e2a6c8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_07830ef0);
    func_0x03280a18(PTR_DAT_077c1d40);
    func_0x03280a18(PTR_DAT_07830fc8);
    func_0x03280a18(PTR_DAT_07830fc0);
    bRam0000000007e2a6c8 = 1;
  }
  uVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
  return uVar3;
}

